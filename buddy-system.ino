int Led1 = D5;
//int motionStatus;

void myWave(const char *event, const char *data);

void setup() {
    pinMode(Led1, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myWave);
 

}

void loop() {
    
}

void myWave(const char *event, const char *data){
    if (strcmp(data,"wave") == 0){
        digitalWrite(Led1,HIGH);
        delay(1000);
        digitalWrite(Led1,LOW);
        delay(1000);
        digitalWrite(Led1,HIGH);
        delay(1000);
        digitalWrite(Led1,LOW);
        delay(1000);
        digitalWrite(Led1,HIGH);
        delay(1000);
        digitalWrite(Led1,LOW);
        delay(1000);
    }
    
    else if(strcmp(data,"pat") == 0){
        digitalWrite(Led1,HIGH);
        delay(500);
        digitalWrite(Led1,LOW);
        delay(500);
        digitalWrite(Led1,HIGH);
        delay(500);
        digitalWrite(Led1,LOW);
        delay(500);
        digitalWrite(Led1,HIGH);
        delay(500);
        digitalWrite(Led1,LOW);
        delay(500);
    }
}

