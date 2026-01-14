void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);// OUTPUT pin 2 goes to LED 1 on board 
pinMode(3, OUTPUT);// OUTPUT pin 3 goes to LED 2 on board contuined
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly, aka loop:
digitalWrite(2, HIGH);// Turn Led 1 on
delay(500);// 500ms delay until next exucutible
digitalWrite(2, LOW);//LED 1 off
digitalWrite(3, HIGH);// reapeat
delay(500);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
delay (500);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
delay (500);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
delay(500);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
delay(500);
digitalWrite(5, LOW);   
digitalWrite(4, HIGH);
delay(500);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
delay(500);
digitalWrite(3, LOW);
}
