
void setup() {
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT); // put your setup code here, to run once:
 }

void loop() {
  // put your main code here, to run repeatedly:
 /*if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case '1': digitalWrite(LED_BUILTIN, HIGH);break; // when a is pressed on the app on your smart phone
        case '0': digitalWrite(LED_BUILTIN, LOW);break; // when d is pressed on the app on your smart phone
        default : break;
      }
      Serial.println(data);
   }
   delay(50); */
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
   
}

// dodalem se komenta xd
