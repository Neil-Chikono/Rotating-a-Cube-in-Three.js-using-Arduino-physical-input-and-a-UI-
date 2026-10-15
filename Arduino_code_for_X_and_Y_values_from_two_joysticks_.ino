int xPin = A0;
int yPin = A1;
int buttonPin = 42;
int xVal;
int yVal;
int buttonState; 

// joystick 2

int xPin2 = A8;
int yPin2 = A9;
int buttonPin2 = 53;
int xVal2;
int yVal2;
int buttonState2; 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xPin, INPUT); // to receive information from the joystick to the Arduino 
pinMode( yPin, INPUT);
pinMode(buttonPin, INPUT_PULLUP);

// second joystick

pinMode(xPin2, INPUT); // to receive information from the joystick to the Arduino 
pinMode( yPin2, INPUT);
pinMode(buttonPin2, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
xVal = analogRead(xPin);
yVal = analogRead(yPin);
buttonState = digitalRead(buttonPin);

// second joystick
xVal2 = analogRead(xPin2);
yVal2 = analogRead(yPin2);
buttonState2 = digitalRead(buttonPin2);


//for reading the values from the joystick in the serial monitor 

//X: XXX|Y: YYY| button: 0/1
//Serial.print("| Joystick 1 X: ");
//Serial.print(xVal);
//Serial.print(" Y: ");
//Serial.print(yVal);
//Serial.print(" |Button: ");
//Serial.print(buttonState);

// print on a new line
//Serial.println();

//Serial.println("| Joystick 2 |X: ");
//Serial.print(xVal2);
//Serial.print(" Y: ");
//Serial.print(yVal2);
//Serial.print(" |Button: ");
//Serial.print(buttonState2);

//serial.println();

Serial.print(xVal);
Serial.print(",");
Serial.println(yVal);
Serial.print(",");


// simpler output for transmitting the data for JavaScript 


delay(50);
}
