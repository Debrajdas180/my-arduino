#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int vote1=0;
int vote2=0;
int vote3=0;
int vote4=0;
#define sw1 15
#define sw2 16
#define sw3 17
#define sw4 18
#define sw5 19
void setup() {
  lcd.begin(16,2);
  lcd.print("VOTING MACHINE");
  lcd.setCursor(0,1);
  lcd.print("HOWRAH");
  delay(5000);

  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
  pinMode(sw3,INPUT_PULLUP);
  pinMode(sw4,INPUT_PULLUP);
  pinMode(sw5,INPUT_PULLUP);
}

void loop() {
if(digitalRead(sw1)==LOW){
vote1++;
lcd.clear();
  lcd.setCursor(7,0);
  lcd.print("BJP");
lcd.setCursor(0,1);
lcd.print("Thnaks for vote");
delay(2000);
lcd.clear();
while(digitalRead(sw1)==0);}
if(digitalRead(sw2)==LOW){
vote2++;
lcd.clear();
lcd.setCursor(7,0);
lcd.print("TMC");
lcd.setCursor(0,1);
lcd.print("Thanks for vote");
delay(2000);
lcd.clear();
while(digitalRead(sw2)==0);}
if(digitalRead(sw3)==LOW){
vote3++;
lcd.clear();
lcd.setCursor(7,0);
lcd.print("CPIM");
lcd.setCursor(0,1);
lcd.print("Thanks for vote");
delay(2000);
lcd.clear();
while(digitalRead(sw3)==0);}
if(digitalRead(sw4)==LOW){
vote4++;
lcd.clear(),
lcd.setCursor(7,0);
lcd.print("CONG");
lcd.setCursor(0,1);
lcd.print("Thanks for vote");
delay(2000);
lcd.clear();
while(digitalRead(sw4)==0);}

if(digitalRead(sw5)==0){

 if (vote1>vote2 && vote1>vote3 && vote1>vote4){
  lcd.clear();
  lcd.print("BJP WINS");
  delay(5000);}
 else if (vote2>vote1 && vote2>vote3 && vote2>vote4){
    lcd.clear();
    lcd.print("TMC WINS");
    delay(5000);}
    else if (vote3>vote1 && vote3>vote2 && vote3>vote4){
      lcd.clear();
      lcd.print("CPIM WINS");
      delay(5000);}
      else if (vote4>vote1 && vote4>vote2 && vote4>vote3){
        lcd.clear();
        lcd.print("CONG WINS");
        delay(5000);}
        else if(vote1==vote2==vote3==vote4){
          lcd.clear();
          lcd.print("TIE UP");
          delay(4000);
          lcd.clear();}
        else{
          lcd.clear();
      lcd.print("NO RESULT");
      delay(4000);
      lcd.clear();}
      vote1=0;vote2=0;vote3=0;vote4=0;
      lcd.clear();
}
}
    
    
    
