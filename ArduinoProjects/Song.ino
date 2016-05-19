int melody[] = {294, 349, 587, 294, 349, 587, 659, 698, 659, 698, 659, 523, 440, 440, 294, 349, 392, 440, 440,
294, 349, 392, 330, 294, 349, 587, 294, 349, 587, 659, 698, 659, 698, 659, 523, 440, 440, 294, 349, 392, 440, 440, 294
  };
 
int noteDurations [] = {
  8, 8, 2, 8, 8, 2, 2.666, 8, 8, 8, 8, 8, 2, 4, 4, 8, 8, 1.333, 4, 4, 8, 8, 1.333, 8, 8, 2, 8, 8, 2, 2.666, 8, 8, 8, 8, 8, 2, 4, 4, 8, 8, 2, 4, 1.333
  };
 
void setup() {
  for ( int thisNote = 0; thisNote < 43; thisNote++) {
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);
    
    int pauseBetweenNotes = noteDuration * 1.20;
    delay (pauseBetweenNotes);
    noTone(8);
  }
}
void loop() {
}

