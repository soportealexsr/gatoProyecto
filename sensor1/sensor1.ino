int SENSOR = 2;
int LED = 3;
int ESTADO;


void setup() {
  // put your setup code here, to run once:
pinMode(SENSOR, INPUT);
pinMode(SENSOR, OUTPUT);
digitalWrite(LED,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  ESTADO = digitalRead(SENSOR);
  if (ESTADO ==LOW){
    digitalWrite(LED, HIGH);
    delay(500);
    }
  digitalWrite(LED,LOW);
}
