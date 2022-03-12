const int MHSensor = 3;
const int JDQ = 5;
int data = 0, ensure = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(MHSensor, INPUT);
  pinMode(JDQ, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  data = digitalRead(MHSensor);
  if(data == 0) {
    digitalWrite(JDQ, LOW);
    ensure = 1;
    delay(2000);
    digitalWrite(JDQ, HIGH);
  } else {
    if (ensure == 1) {
      delay(2000);
      digitalWrite(JDQ, LOW);
      ensure = 0; 
      digitalWrite(JDQ, LOW);
    }
  }
  delay(2000);
}
