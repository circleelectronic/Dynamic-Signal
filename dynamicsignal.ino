#define CLOCK 10 
#define LATCH 9 
#define DATA 8 
#define DATA2 7 
#define LATCH2 6 
#define CLOCK2 5 

byte leds[]={0b00000000, 
0b00000001,
0b00000011,
0b00000111,
0b00001111,
0b00011111,
0b00111111,
0b01111111,
0b11111111,
};
 
void setup()
{
pinMode(CLOCK,OUTPUT);
pinMode(LATCH,OUTPUT);
pinMode(DATA,OUTPUT);
pinMode(CLOCK2,OUTPUT);
pinMode(LATCH2,OUTPUT);
pinMode(DATA2,OUTPUT);
}

void loop()
{
for (int led=0;led<=8;led++)  
 {
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,leds[led]);
  digitalWrite(LATCH,HIGH); 
  delay(40);
  if(led == 8){
    for (int led=0;led<=9;led++)  
     {
        digitalWrite(LATCH2,LOW);
        shiftOut(DATA2,CLOCK2,MSBFIRST,leds[led]);
        digitalWrite(LATCH2,HIGH);
        delay(40);
     }
   }
 }
}
