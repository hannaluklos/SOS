
int dioda = 13;
int czas = 500;
void setup() {
  pinMode(dioda, OUTPUT);

}

void loop() {
  for(int i=0; i<3; i=i+1){
   digitalWrite(dioda, HIGH);
   delay(czas);
   digitalWrite(dioda, LOW);
   delay(czas);
   }
   delay(2000);
   
   for(int i=0; i<3; i=i+1){
   digitalWrite(dioda, HIGH);
   delay(czas+500);
   digitalWrite(dioda, LOW);
   delay(czas);
   }
   delay(2000);
   
   for(int i=0; i<3; i=i+1){
   digitalWrite(dioda, HIGH);
   delay(czas);
   digitalWrite(dioda, LOW);
   delay(czas);
   }
   delay(5000);
}
