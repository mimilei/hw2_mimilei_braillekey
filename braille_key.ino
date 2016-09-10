// do not use the cloud functions - assume programming through Arduino IDE
#if defined(ARDUINO) 
SYSTEM_MODE(MANUAL); 
#endif

const int four = D0;
const int five = D1;
const int six = D2;
const int space = D3;

const int one = A2;
const int two = A1;
const int three = A0;
const int newline = A3;

//int led = D7;
int one_val = 0;
int two_val = 0;
int three_val = 0;
int four_val = 0;
int five_val = 0;
int six_val = 0;
int space_val = 0;
int newline_val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(one, INPUT_PULLDOWN);
  pinMode(two, INPUT_PULLDOWN);
  pinMode(three, INPUT_PULLDOWN);
  pinMode(four, INPUT_PULLDOWN);
  pinMode(five, INPUT_PULLDOWN);
  pinMode(six, INPUT_PULLDOWN);
  pinMode(space, INPUT_PULLDOWN);
  pinMode(newline, INPUT_PULLDOWN);
//  pinMode(led, OUTPUT);
}

void loop() {

  one_val = digitalRead(one);
  two_val = digitalRead(two);
  three_val = digitalRead(three);
  four_val = digitalRead(four);
  five_val = digitalRead(five);
  six_val = digitalRead(six);
  space_val = digitalRead(space);
  newline_val = digitalRead(newline);
   /*
    *Y = 1, 3, 4, 5, 6
    * Q = 1, 2, 3, 4, 5
    */
  if (one_val && three_val && four_val && five_val && six_val) {
    Serial.print("y");
  }
  else if (one_val && two_val && three_val && four_val && five_val) {
    Serial.print("q");
  }
  /*
   * P = 1, 2, 3, 4
   * Z = 1, 2, 5, 6
   * X = 1, 3, 4, 6
   * V = 1, 2, 3, 6
   */
  else if (one_val && two_val && three_val && four_val) {
    Serial.print("p");
  }
  else if (one_val && three_val && five_val && six_val) {
    Serial.print("z");
  }
  else if (one_val && three_val && four_val && six_val) {
    Serial.print("x");
  }
  else if (one_val && two_val && three_val && six_val) {
    Serial.print("v");
  }
  /*
   * R = 1, 2, 3, 5
   * W = 2, 4, 5, 6
   * T = 2, 3, 4, 5
   * N = 1, 3, 4, 5
   * G = 1, 2, 4, 5
   */
  else if (one_val && two_val && three_val && five_val) {
    Serial.print("r");
  }
  else if (two_val && four_val && five_val && six_val) {
    Serial.print("w");
  }
  else if (two_val && three_val && four_val && five_val) {
    Serial.print("t");
  }
  else if (one_val && three_val && four_val && five_val) {
    Serial.print("n");
  }
  else if (one_val && two_val && four_val && five_val) {
    Serial.print("g");
  }
  /*
   * M = 1, 3, 4
   * L = 1, 2, 3
   * O = 1, 3, 5
  */
  else if (one_val && three_val && four_val) {
    Serial.print("m");
  }
  else if (one_val && two_val && three_val) {
    Serial.print("l");
  }
  else if (one_val && three_val && five_val) {
    Serial.print("o");
  }
  /* U = 1, 3, 6
   * S = 2, 3, 4
   * J = 2, 4, 5
   */
  else if (one_val && three_val && six_val) {
    Serial.print("u");
  }
  else if (two_val && three_val && four_val) {
    Serial.print("s");
  }
  else if (two_val && four_val && five_val) {
    Serial.print("j");
  }
  /*
   * H = 1, 2, 5
   * F = 1, 2, 4
   * D = 1, 4, 5
   */
  else if (one_val && two_val && five_val) {
    Serial.print("h");
  }
  else if (one_val && two_val && four_val) {
    Serial.print("f");
  }
  else if (one_val && four_val && five_val) {
    Serial.print("d");
  }
  /*
   * K = 1, 3
   * I = 2, 4
   * E = 1, 5
   * C = 1, 4
   * B = 1, 2
   * 
  */
  else if (one_val && three_val) {
    Serial.print("k");
  }
  else if (two_val && four_val) {
    Serial.print("i");
  }
  else if (one_val && five_val) {
    Serial.print("e");
  }
  else if (one_val && four_val) {
    Serial.print("c");
  }
  else if (one_val && two_val) {
    Serial.print("b");
  }
  /*
   * A = 1
   */
  else if (one_val) {
    Serial.print("a");
  }
  else if (space_val) {
    Serial.print(" ");
  }
  else if (newline_val) {
    Serial.print("\n");
  }
   
  delay(200);
}
