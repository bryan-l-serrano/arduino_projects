int one = 1;
int two = 2;
int four = 3;
int eight = 4;
int sixteen = 5;
int thirtytwo = 6;
int hour1 = 7;
int hour2 = 8;
int hour4 = 9;
int hour8 = 10;
int hour16 = 11;

void setup() {
  pinMode(one, OUTPUT);
  digitalWrite(one, LOW);
  pinMode(two, OUTPUT);
  digitalWrite(two, LOW);
  pinMode(four, OUTPUT);
  digitalWrite(four,LOW);
  pinMode(eight, OUTPUT);
  digitalWrite(eight, LOW);
  pinMode(sixteen, OUTPUT);
  digitalWrite(sixteen, LOW);
  pinMode(thirtytwo, OUTPUT);
  digitalWrite(thirtytwo, LOW);
  pinMode(hour1, OUTPUT);
  digitalWrite(hour1, LOW);
  pinMode(hour2, OUTPUT);
  digitalWrite(hour2, LOW);
  pinMode(hour4, OUTPUT);
  digitalWrite(hour4, LOW);
  pinMode(hour8, OUTPUT);
  digitalWrite(hour8, LOW);
  pinMode(hour16, OUTPUT);
  digitalWrite(hour16, LOW);
}

void loop(){
  int hour_counter = 0;
  int counter = 0;
  while(counter >= 0){
    delay(59950);
    if( (counter % 2) == 0){
      digitalWrite(one,LOW);
    }
    else if( (counter % 2) == 1){
      digitalWrite(one, HIGH);
    }
    if( (counter / 2) % 2 == 0){
      digitalWrite(two, LOW);
    }
    else if((counter/2) %2 == 1 ){
      digitalWrite(two, HIGH);
    }
    if((counter/4)%2 == 0){
      digitalWrite(four, LOW);
    }
    else if((counter/4)%2 == 1){
      digitalWrite(four,HIGH);
    }
    if((counter / 8) % 2 == 0){
      digitalWrite(eight, LOW);
    }
    else if(( counter / 8) % 2 == 1){
      digitalWrite(eight, HIGH);
    }
    if ((counter / 16) % 2 == 0){
      digitalWrite(sixteen, LOW);
    }
    else if ((counter / 16) % 2 == 1){
      digitalWrite(sixteen, HIGH);
    }
    if ((counter / 32) % 2 == 0){
      digitalWrite(thirtytwo, LOW);
    }
    else if(( counter / 32) % 2 == 1){
      digitalWrite(thirtytwo, HIGH);
    }
    if((counter % 60 == 0) && (counter !=0)){
        digitalWrite(one, LOW);
        digitalWrite(two, LOW);
        digitalWrite(four, LOW);
        digitalWrite(eight, LOW);
        digitalWrite(sixteen, LOW);
        digitalWrite(thirtytwo, LOW);
        hour_counter++;
        counter = 0;
    }
    if( hour_counter % 2 == 0){
        digitalWrite(hour1, LOW);
    }
    else if( hour_counter % 2 == 1){
        digitalWrite(hour1, HIGH);
   }   
   if( (hour_counter/2) % 2 == 0){
        digitalWrite(hour2, LOW);
    }
    else if( (hour_counter/2) % 2 == 1){
        digitalWrite(hour2, HIGH);
    }
    if( (hour_counter/ 4) % 2 == 0){
        digitalWrite(hour4, LOW);
    }
    else if( (hour_counter/4) % 2 == 1){
        digitalWrite(hour4, HIGH);
    }
    if( (hour_counter/8) % 2 == 0){
        digitalWrite(hour8, LOW);
    }
    else if( (hour_counter/8) % 2 == 1){
        digitalWrite(hour8, HIGH);
    }
    if( (hour_counter/16) % 2 == 0){
        digitalWrite(hour16, LOW);
    }
    else if( (hour_counter/16) % 2 == 1){
        digitalWrite(hour16, HIGH);
    }
    if( hour_counter == 24){
      digitalWrite(hour1, LOW);
      digitalWrite(hour2, LOW);
      digitalWrite(hour4, LOW);
      digitalWrite(hour8, LOW);
      digitalWrite(hour16, LOW);
      hour_counter =0;
    }
    counter++;
  }
}
