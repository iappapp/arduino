#define A1 2
#define B1 3
#define C1 4
#define D1 5
#define E1 6
#define F1 7
#define G1 8
#define H1 9

#define W1 10
#define W2 11
#define W3 12
#define W4 13
#define DELAY 0.1

unsigned char num[17][8] = {
//a   b  c  d  e  f  g  h
  {1, 1, 1, 1, 1, 1, 0, 0}, //0
  {0, 1, 1, 0, 0, 0, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1, 0}, //2
  {1, 1, 1, 1, 0, 0, 1, 0}, //3

  {0, 1, 1, 0, 0, 1, 1, 0}, //4
  {1, 0, 1, 1, 0, 1, 1, 0}, //5
  {1, 0, 1, 1, 1, 1, 1, 0}, //6
  {1, 1, 1, 0, 0, 0, 0, 0}, //7

  {1, 1, 1, 1, 1, 1, 1, 0}, //8
  {1, 1, 1, 1, 0, 1, 1, 0}, //9
  {1, 1, 1, 0, 1, 1, 1, 1}, //A
  {1, 1, 1, 1, 1, 1, 1, 1}, //B

  {1, 0, 0, 1, 1, 1, 0, 1}, //C
  {1, 1, 1, 1, 1, 1, 0, 1}, //D
  {1, 0, 0, 1, 1, 1, 1, 1}, //E
  {1, 0, 0, 0, 1, 1, 1, 1}, //F

  {0, 0, 0, 0, 0, 0, 0, 1}  //。
};

void setup() {
  // put your setup code here, to run once:
  pinMode(A1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(D1, OUTPUT);

  pinMode(E1, OUTPUT);
  pinMode(F1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(H1, OUTPUT);

  pinMode(W1, OUTPUT);
  pinMode(W2, OUTPUT);
  pinMode(W3, OUTPUT);
  pinMode(W4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int l = 0; l < 10; l++) {
    for (int k = 0; k < 10; k++) {
      for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
          for (int q = 0; q < 125; q++) {
            Display(1, l);
            delay(DELAY);
            Display(2, k);
            delay(DELAY);
            Display(3, j);
            delay(DELAY);
            Display(4, i);
            delay(DELAY);
          }
        }
      }
    }
  }
}

void Display(unsigned char com, unsigned char n) {
  digitalWrite(A1, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(C1, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
  digitalWrite(H1, LOW);

  switch(com) {
    case 1:
      digitalWrite(W1, LOW);
      digitalWrite(W2, HIGH);
      digitalWrite(W3, HIGH);
      digitalWrite(W4, HIGH);
      break;
    case 2:
      digitalWrite(W1, HIGH);
      digitalWrite(W2, LOW);
      digitalWrite(W3, HIGH);
      digitalWrite(W4, HIGH);
      break;
    case 3:
      digitalWrite(W1, HIGH);
      digitalWrite(W2, HIGH);
      digitalWrite(W3, LOW);
      digitalWrite(W4, HIGH);
      break;
    case 4:
      digitalWrite(W1, HIGH);
      digitalWrite(W2, HIGH);
      digitalWrite(W3, HIGH);
      digitalWrite(W4, LOW);
      break;
    default:
      break;
  }
  digitalWrite(A1, num[n][0]);
  digitalWrite(B1, num[n][1]);
  digitalWrite(C1, num[n][2]);
  digitalWrite(D1, num[n][3]);
  digitalWrite(E1, num[n][4]);
  digitalWrite(F1, num[n][5]);
  digitalWrite(G1, num[n][6]);
  digitalWrite(H1, num[n][7]);

}
