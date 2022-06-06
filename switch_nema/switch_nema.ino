
//limitswitch tanımlama
const int limitSwitch_x  = 3;//koldaki
//const int limitSwitch_y  = 14;//yatay
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

 pinMode(limitSwitch_x, INPUT);
 // pinMode(limitSwitch_y, INPUT); 
}
 void loop()
{
//asagi();

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
    int limSw1 = digitalRead(limitSwitch_x);
    if(limSw1==0)
      break; 
    digitalWrite(E_STEP_PIN, LOW);
    delayMicroseconds(600);
    digitalWrite(E_STEP_PIN, HIGH);
    delayMicroseconds(600);

  x++;
   
  }
  
}

void asagi(){

  int limSw2 = digitalRead(limitSwitch_x);//yatay
 
  while(limSw2==HIGH){
  limSw2 = digitalRead(limitSwitch_x);
  kol_asagi(100);
  if(limSw2==0)
      break;
  }
  delay(2000);
  kol_yukari(3000);
  delay(2000); 
  
  
  }
 /* void yukari(){

  int limSw3 = digitalRead(limitSwitch_y);//yatay
 
  while(limSw3==HIGH){
  limSw3 = digitalRead(limitSwitch_y);
  kol_yukari(100);
  if(limSw3==0)
      break;
  }
  kol_dur();
  delay(2000); 
  
  }*/
