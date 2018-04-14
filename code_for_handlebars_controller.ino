const int yellow = A0; //colour of wire connected to analog input (LEFT turn)
const int green = A1; //colour of wire connected to analog input (RIGHT turn)
int greenval; //analog reading for green wire (A1)
int yellowval;//analog reading for yellow wire (A1)

char current = 'I'; 
char switcher = 'I'; //default IDLE animation

void setup() {
Serial.begin(38400);

}

void loop() {
  //read switch 
  greenval = analogRead(green);
  yellowval = analogRead(yellow);
  if (greenval > 500) {
    switcher = 'R';
  } else if (yellowval > 500) {
    switcher = 'L';
  } else {
    switcher = 'I';
  }
  //only transmit a signal if it has changed (saves power)
  if (current != switcher) {
    current = switcher;
    Serial.println(switcher);
  }
  delay(500);
}


