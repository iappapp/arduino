#define Trig 2
#define Echo 3

float cm;
float temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);

  temp = float(pulseIn(Echo, HIGH));
  Serial.println(temp);
  cm =( temp * 17 ) / 1000;

  Serial.print("Echo = ");
  Serial.print(temp);
  Serial.print(" || Distance = ");
  Serial.print(cm);
  Serial.println("cm");
  delay(1000);
}
