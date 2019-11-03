// Lesson 01 Movement

int motor_A = 12; // set Motor A to Arduino Pin 12
int motor_B = 13; // set Motor B to Arduino Pin 13
int motor_A_speed = 10; // set Motor A Speed to Arduino Pin 10
int motor_B_speed = 11; // set Motor B Speed to Arduino Pin 11

int wait_in_milliseconds = 1000; // set the time between motor on and motor off


void setup() {
  // this code runs once at the start
  Serial.begin(9600);

  pinMode(motor_A, OUTPUT);
  pinMode(motor_B, OUTPUT);
}

void forward() {

  // move forward
  digitalWrite(motor_A, LOW);  // set the direction to forward
  digitalWrite(motor_B, HIGH); // set the direction to forward

  analogWrite(motor_A_speed, 255); // set to full speed
  analogWrite(motor_B_speed, 255); // set to full speed

  delay(wait_in_milliseconds); // wait

  analogWrite(motor_A_speed, 0); // stop
  analogWrite(motor_B_speed, 0); // stop
}

// the main program loop
void loop(){
  forward(); // move forward
  delay(2000); // wait 2 seconds
}
