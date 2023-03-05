
// Author: Aman Arabzadeh
// Date: 2023-03-05

/*

Arduino Uno board
4 LEDs
4 220 ohms resistors
5 male-to-male jumper wires
Breadboard
*/


// set pin numbers for LEDs

const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;

void setup() {
  // set pin modes to OUTPUT
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  int count = 0; // initialize count variable

  while (count <= 15) { // loop from 0 to 15
    digitalWrite(LED1, bitRead(count, 0)); // turn on or off LED1 based on binary representation of count
    digitalWrite(LED2, bitRead(count, 1)); // turn on or off LED2 based on binary representation of count
    digitalWrite(LED3, bitRead(count, 2)); // turn on or off LED3 based on binary representation of count
    digitalWrite(LED4, bitRead(count, 3)); // turn on or off LED4 based on binary representation of count
    
    count++; // increment count by one 
    
    delay(1000); // wait for 1 second before counting up again
  }
}
