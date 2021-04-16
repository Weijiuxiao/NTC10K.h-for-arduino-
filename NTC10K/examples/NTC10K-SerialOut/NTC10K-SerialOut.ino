#include <NTC10K.h>

//  created 17 April 2021
//  by Alex

//分压电阻为 4.7K
//连接方式：GND----|4.7K|--|--|NTC10K|---+5V
//                        |-A0→读取AD值

NTC10K T0(A0);
//NTC10K T1(A1);
//NTC10K T2(A2);
//NTC10K T3(A3);
//
//NTC10K T4(A4);
//NTC10K T5(A5);
//NTC10K T6(A6);
//NTC10K T7(A7);

float T[8];
int AD;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  T[0] = T0.AD_to_temp();
  AD = analogRead(A0);
  Serial.print("AD value is:");
  Serial.print(AD);
  Serial.print("  ");
  Serial.print("temperature is:");
  Serial.println(T[0],2);
  delay(100);
}
