// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  Serial.println("Robot is moving backward.");
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  Serial.println("Robot is moving forward.");
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  Serial.println("Robot is moving left.");
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  Serial.println("Robot is moving right.");
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
}
