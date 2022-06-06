const int limitSwitch_x  = 3;
void setup() {
  // put your setup code here, to run once:
 pinMode(limitSwitch_x, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void kol_test1(){
  int limSw1 = digitalRead(limitSwitch_x);//yatay
    
    while(limSw1==HIGH){
       limSw1 = digitalRead(limitSwitch_x);
       kol_sag(200);
       }  
       kol_dur();//kameradan gelen derinlik

}
