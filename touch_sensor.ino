int LED=33;
int touch=4;

void setup() {
  Serial.begin(115200);
pinMode(LED,OUTPUT);
pinMode(touch,INPUT);


}

void loop() {
if(digitalRead(touch)==HIGH) {      
        digitalWrite(LED, HIGH);
        Serial.println(F("touch sensor activated"));
     }
   else{
        digitalWrite(LED, LOW); 


   }
}