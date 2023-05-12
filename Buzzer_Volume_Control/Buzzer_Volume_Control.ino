
#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262

int melody[]={
  NOTE_C4,NOTE_G3,NOTE_G3,NOTE_A3,NOTE_G3,0,NOTE_B3,NOTE_C4
};
int noteDurations[]={
  4,8,8,4,4,4,4,4
};
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int thisNote=0; thisNote<8; thisNote++)
  {
    int noteDuration=1000/noteDurations[thisNote];
    tone(8,melody[thisNote],noteDuration);
    int pause=noteDuration*1.3;
    delay(pause);
    noTone(8);
  }
  delay(200);
}
