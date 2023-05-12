#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523

//note in the melody:
int melody[]={
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
};

// note durations: 4= quarter note, 8 = eight note, etc. :
int noteDurations[]={
  4, 4, 4, 4, 4, 4, 4, 4
};

int ledPin[] ={
  2, 3, 4, 5, 6, 7, 8, 9 
};

int tonePin=10;
int ledState;
void setup() {
  // put your setup code here, to run once:
  for(int thisLed=0;thisLed<8;thisLed++){
    pinMode(ledPin[thisLed],OUTPUT);
  }
}

void loop(){
  for(int thisNote =0; thisNote < sizeof(melody)/sizeof(melody[0]); thisNote++){
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(tonePin, melody[thisNote], noteDuration);

    if(melody[thisNote]==NOTE_C4){
      digitalWrite(ledPin[0],HIGH);
      ledState=ledPin[0];
    }else if(melody[thisNote]==NOTE_D4){
      digitalWrite(ledPin[1],HIGH);
      ledState=ledPin[1];
    }else if(melody[thisNote]==NOTE_E4){
      digitalWrite(ledPin[2],HIGH);
      ledState=ledPin[2];
    }else if(melody[thisNote]==NOTE_F4){
      digitalWrite(ledPin[3],HIGH);
      ledState=ledPin[3];
    }else if(melody[thisNote]==NOTE_G4){
      digitalWrite(ledPin[4],HIGH);
      ledState=ledPin[4];
    }else if(melody[thisNote]==NOTE_A4){
      digitalWrite(ledPin[5],HIGH);
      ledState=ledPin[5];
    }else if(melody[thisNote]==NOTE_B4){
      digitalWrite(ledPin[6],HIGH);
      ledState=ledPin[6];
    }else if(melody[thisNote]==NOTE_C5){
      digitalWrite(ledPin[7],HIGH);
      ledState=ledPin[7];
    }
    int pauseBetweenNotes = noteDuration*1.30;
    delay(pauseBetweenNotes);

    noTone(tonePin);
    digitalWrite(ledState, LOW);
  }
    delay(200);
}
