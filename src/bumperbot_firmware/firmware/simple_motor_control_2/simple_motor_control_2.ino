#define L298N_enA 9
#define L298N_enB 11  // PWM
#define L298N_in1 12
#define L298N_in2 13
#define L298N_in4 8  // Dir Motor B
#define L298N_in3 7  // Dir Motor B


void setup() {
  pinMode(L298N_enA, OUTPUT);
  pinMode(L298N_enB, OUTPUT);
  pinMode(L298N_in1, OUTPUT);
  pinMode(L298N_in2, OUTPUT);
  pinMode(L298N_in3, OUTPUT);
  pinMode(L298N_in4, OUTPUT);

  digitalWrite(L298N_in1, HIGH);
  digitalWrite(L298N_in2, LOW);
  digitalWrite(L298N_in3, HIGH);
  digitalWrite(L298N_in4, LOW);
  analogWrite(L298N_enA, 50);
    analogWrite(L298N_enB, 50);



}
void loop() {
  // put your main code here, to run repeatedly:

}
