int val = 0; //сюда считываем сигнал

void setup()
{
  Serial.begin(9600);              //  setup serial
  pinMode(7, OUTPUT);              //  выход на светодиод
  digitalWrite(7, LOW);
  pinMode(11, OUTPUT);             //  выход на динамик
}

void loop()
{
  val = analogRead(0); //принмаем сигнал с нулевого аналогового входа и т.д.
  if(val==0){
    digitalWrite(7, HIGH);
    tone (11, 659);
    delay(100);
  } else {
    digitalWrite(7, LOW);
    noTone(11);
  } //ми
  
  val = analogRead(1); 
  if(val==0) {
    digitalWrite(7, HIGH);
    tone (11, 987);
    delay(100);
  } else {
    digitalWrite(7, LOW);
    noTone(11);
  } //си
  
  val = analogRead(2); 
  if(val==0) {
    digitalWrite(7, HIGH);
    tone (11, 880);
    delay(100);
  } else {
    digitalWrite(7, LOW);
    noTone(11);
  } //ля
  
  val = analogRead(3); 
  if(val==0) {
    digitalWrite(7, HIGH);
    tone (11, 1318);
    delay(100);
  } else {
    digitalWrite(7, LOW);
    noTone(11);
  } //ми
  
  val = analogRead(4); 
  if(val==0) {
    digitalWrite(7, HIGH);
    tone (11, 1046);
    delay(100);
  } else {
    digitalWrite(7, LOW);
    noTone(11);
  } //до
  
  val = analogRead(5); 
  if(val==0) {
    digitalWrite(7, HIGH);
    tone (11, 784);
    delay(100);
  } else {
    digitalWrite(7, LOW);
    noTone(11);
  } //соль
}
