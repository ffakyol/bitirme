
//limitswitch tanımlama
const int limitSwitch_x  = 3;//koldaki

//step motor tanımlama

#define E_STEP_PIN      36
#define E_DIR_PIN       34
#define E_ENABLE_PIN    30

void setup()
{
 pinMode(E_STEP_PIN  , OUTPUT);
 pinMode(E_DIR_PIN    , OUTPUT);
 pinMode(E_ENABLE_PIN  , OUTPUT);

 digitalWrite(E_ENABLE_PIN , LOW);
}
 void loop()
{
 

}


 void  kol_dur( ) {//saat yonu dönmesi low

     digitalWrite(E_DIR_PIN, LOW); // Enables the step to move in a particular directio
     digitalWrite(E_STEP_PIN, LOW);
}

 void  kol_yukari(int Adim5){
  
  digitalWrite(E_DIR_PIN, LOW); // Enables the motor to move in a particular directio
  
  for (int x = 0; x < Adim5; x++) {
  digitalWrite(E_STEP_PIN, HIGH);
  delayMicroseconds(500);
  
  digitalWrite(E_STEP_PIN, LOW );
  delayMicroseconds(500);
 }

}


void  kol_asagi(int Adim6){

  digitalWrite(E_DIR_PIN, HIGH); 
  for (int x = 0; x < Adim6; x++) 
  {

  digitalWrite(E_STEP_PIN, LOW);
 delayMicroseconds(600);
  digitalWrite(E_STEP_PIN, HIGH);
  delayMicroseconds(600); 
  }

}
