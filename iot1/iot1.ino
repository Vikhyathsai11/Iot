void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int m=digitalRead(D1);
  Serial.println(m);

}
