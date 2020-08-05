/// SIMPLE LINE FOLLOWING ROBOT ///

#define LeftIR 2      // left infrared sensor
#define RightIR 3      // right infrared sensor

#define LeftMotorForward 4        // Forward movement of left motor
#define LeftMotorReverse 5        // Reverse movement of left motor
#define RightMotorForward 6       // Forward movement of right motor
#define RightMotorReverse 7       // Reverse movement of right motor
void setup() {
  Serial.begin(9600);                                          // Serial monitor for debugging 
  pinMode(LeftIR, INPUT);
  pinMode(RightIR, INPUT);
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(LeftMotorReverse, OUTPUT);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(RightMotorReverse, OUTPUT);

}

void loop() {
  //Serial.println(digitalRead(LeftIR))                            // Serial monitor for debugging
  //Serial.println(digitalRead(RightIR))
  
  if((digitalRead(LeftIR)==LOW) && (digitalRead(RightIR)==LOW))     // Robot moves Forward
  {
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(LeftMotorReverse, LOW);
    digitalWrite(RightMotorForward, HIGH);
    digitalWrite(RightMotorReverse, LOW);

  }

    if((digitalRead(LeftIR)==LOW) && (digitalRead(RightIR)==HIGH))     // Robot turns Right
  {
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(LeftMotorReverse, LOW);
    digitalWrite(RightMotorForward, LOW);
    digitalWrite(RightMotorReverse, LOW);
  }
    if((digitalRead(LeftIR)==HIGH) && (digitalRead(RightIR)==LOW))     // Robot turns Left
  {
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(LeftMotorReverse, LOW);
    digitalWrite(RightMotorForward, HIGH);
    digitalWrite(RightMotorReverse, LOW);
  }
  if((digitalRead(LeftIR)==HIGH) && (digitalRead(RightIR)==HIGH))     // Robot ceses movement
  {
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(LeftMotorReverse, LOW);
    digitalWrite(RightMotorForward, LOW);
    digitalWrite(RightMotorReverse, LOW);
  }
  delay(10);
}
  
