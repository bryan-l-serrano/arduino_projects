int left_sensor = 0;
int middle_sensor = 1;
int right_sensor = 2;
int temp_sensor = 3;
int left_motor = 5;
int right_motor = 6;
int red = 10;
int green = 11;
int blue = 12;
int brightness = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(left_motor, OUTPUT);
  pinMode(right_motor, OUTPUT);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(left_motor, LOW);
  digitalWrite(right_motor, LOW);
}

void loop() 
{
  float left_value = analogRead(left_sensor);
  float middle_value = analogRead(middle_sensor);
  float right_value = analogRead(right_sensor);
  float temput = analogRead(temp_sensor);
  float voltage = temput * ( 5.0 / 1024.0);
  float degreesc = (voltage - .5) * 100.0;
  float degreesf = (degreesc * ( 9.0 / 5.0)) + 32.0;

  if( middle_value > 300)
  {
    while(middle_value > 300)
    {
      digitalWrite(left_motor, HIGH);
      digitalWrite(right_motor, HIGH);
      middle_value = analogRead(middle_sensor);
    }
  }
  
  else
  {
    if (left_value > 300)
    {
      while(left_value > 300)
      {
        digitalWrite(left_motor, HIGH); 
        left_value = analogRead(left_sensor);
      }
    }
    else
    {
      digitalWrite(left_motor, LOW);
    }
    if (right_value > 300)
    {
      while(right_value > 300)
      {
        digitalWrite(right_motor, HIGH); 
        right_value = analogRead(right_sensor);
      }
    }
    else
    {
      digitalWrite(right_motor, LOW);
    }
    
  }
  
  Serial.print(degreesf);
  Serial.println(" ");
 
  
  if( ( degreesf >= 70) && (degreesf < 80))
  {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
  }
  if( ( degreesf >= 60) && (degreesf < 70))
  {
    digitalWrite(blue, HIGH); 
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);  
  }
  if (degreesf >= 80)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  if(degreesf < 60)
  {
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
  }
  
  
}
