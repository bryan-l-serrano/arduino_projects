

int photoresistor = 0;
int play_note = 12;

void setup() {
  Serial.begin(9600);
  pinMode( play_note, OUTPUT);
}

void loop(){
  int value = analogRead(photoresistor);
  Serial.println(value);
  tone(12, value);
}
