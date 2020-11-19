#define LED_S1V 10
#define ON HIGH
#define OFF LOW

void setup(){
  pinMode(LED_S1V, OUTPUT);
  Serial.begin (9600);
  Serial.println ("Startup"); 
}

void loop(){
  
int viive = 3;
int i=0;

do {i++; Serial.println (i); analogWrite(LED_S1V, i); delay(viive);}
    while (i<255);
      {if (i=255);
        {do {i--; Serial.println (i); analogWrite(LED_S1V, i); delay(viive);}
          while (i>0);
         }
       }
     }
       
/*
 
  //"for" code
   
    void loop() {
    int viive = 3;
    for(int i=0; i<255; i++){
    Serial.println(i);
    analogWrite(LED_S1V, i);
    delay(viive);
  }
  for(int i=255; i>0; i--){
    Serial.println(i);
    analogWrite(LED_S1V, i);
    delay(viive);  
}
}
*/
