// Lesson 01 Movement
// www.smarsfan.com/play/lessons/lesson_01_movement

// set Motor A to Arduino Pins
int motor_A = 12;
int motor_B = 13;

// set the Motor Speed using the Arduino Pins
int motor_A_speed = 10;
int motor_B_speed = 11;

// set the time between motor on and motor off
int wait_in_milliseconds = 1000;

// this code runs once at the start
void setup() {

  // this sets the speed of communication between the computer and Arduino,
  // used when uploading your code
  Serial.begin(9600);

  // set the Arduino pin to OUTPUT mode
  pinMode(motor_A, OUTPUT);
  pinMode(motor_B, OUTPUT);
}

// move forward
void forward() {

  // set the direction to forward
  digitalWrite(motor_A, LOW);
  digitalWrite(motor_B, HIGH);

  // set to full speed
  analogWrite(motor_A_speed, 255);
  analogWrite(motor_B_speed, 255);

  // wait
  delay(wait_in_milliseconds);

  // stop
  analogWrite(motor_A_speed, 0);
  analogWrite(motor_B_speed, 0);
}

// the main program loop
void loop(){

  // move forward
  forward();

  // wait 2 seconds
  delay(2000);
}
