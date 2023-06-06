#include <Adafruit_CircuitPlayground.h>

bool buttonA = 0; // defines left button
bool buttonB = 0; // defines right button

bool slideSwitch; // stores the state of the switch as either true or false
int switchPin = 7; // sets the switch to pin 7 on the arduino
volatile bool switchFlag = 0; // initialize as switch state as false but can be modified

void setup() {
  CircuitPlayground.begin(); // initalizes the board

  pinMode(switchPin, INPUT_PULLUP); // defines switchPin
  attachInterrupt(digitalPinToInterrupt(switchPin), switchChange, CHANGE); // whenever the switch connected to switchPin changes the onOff function is called
}

void loop() {
  buttonA = CircuitPlayground.leftButton(); // defines buttonA as the left button 
  buttonB = CircuitPlayground.rightButton(); // defines buttonB as the right button 


  if(switchFlag){ // if the interrupt is true the if statement will run.
      delay(100); // delay for oscillations
      slideSwitch = digitalRead(switchPin); // reads the state of the switch
      switchFlag = 0; // resets the interrupt
  }
  
  if (buttonA && buttonB && slideSwitch) {
    Serial.println("Player: SCISSORS");  // if both buttons are pressed play scissors
    int randomLED = random(10); // chooses random LED
    for (int i = 0; i <= 10; i++) { // starts at which LED, goes through which LED, and what direction
      if (i == randomLED) {  // calls the selected LED
      CircuitPlayground.setPixelColor(i, 128, 0, 0); // random LED light up red
      CircuitPlayground.playTone(750, 100); // plays note at 50 Hz for 100 millisecond
      } else {
      CircuitPlayground.setPixelColor(i, 0, 0, 0); // turns off all other LEDs
      CircuitPlayground.playTone(0, 0); // does not make noise
      }
    }
  }
  

  
  else if (buttonB && slideSwitch) {
    Serial.println("Player: PAPER"); // if the right button is pressed play paper
    int randomLED = random(10); // chooses random LED
    for (int i = 0; i <= 10; i++) { // starts at which LED, goes through which LED, and what direction
      if (i == randomLED) {  // calls the selected LED
      CircuitPlayground.setPixelColor(i, 0, 128, 0); // random LED light up green
      CircuitPlayground.playTone(300, 100); // plays note at 50 Hz for 100 millisecond
      } else {
      CircuitPlayground.setPixelColor(i, 0, 0, 0); // turns off all other LEDs
      CircuitPlayground.playTone(0, 0); // does not make noise
      }
    }
  }
  

  else if (buttonA && slideSwitch) {
    Serial.println("Player: ROCK");  // if the left button is pressed play rock
    int randomLED = random(10); // chooses random LED
    for (int i = 0; i <= 10; i++) { // starts at which LED, goes through which LED, and what direction
      if (i == randomLED) {  // calls the selected LED
      CircuitPlayground.setPixelColor(i, 128, 0, 128); // random LED light up purple
      CircuitPlayground.playTone(50, 100); // plays note at 50 Hz for 100 milliseconds
      } else {
      CircuitPlayground.setPixelColor(i, 0, 0, 0); // turns off all other LEDs
      CircuitPlayground.playTone(0, 0); // does not make noise
      }
    }
  }

  delay(2000);  // read every 2 seconds

  if (buttonA && slideSwitch || buttonB && slideSwitch){
    int randomRPS = random(3); // generates a random number between 0 and 2
    
    if (randomRPS == 0) {
      Serial.println("SUSAN: ROCK"); // if 0 is picked Susan plays rock
    } else if (randomRPS == 1) {
      Serial.println("SUSAN: PAPER"); // if 1 is picked Susan plays paper
    } else if (randomRPS == 2) {
      Serial.println("SUSAN: SCISSORS"); // if 2 is picked Susan plays scissors
    }
  }
  Serial.println(" ");
  delay(1000);
}


void switchChange() {
  switchFlag = 1; // interrupt when the switch changes state sets function to true.
}
