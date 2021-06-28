void setup() {
  // put your setup code here, to run once:
   pinMode( 13 , OUTPUT );
   pinMode( 9 , OUTPUT );
   pinMode( 12 , INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(13, HIGH );
    digitalWrite(9, HIGH );
    digitalWrite(8, LOW );
    delay(500);
//black
  if (digitalRead(12) == LOW) {
    digitalWrite(9, LOW );
    delay(500);
  }
//other color
  if (digitalRead(12) == HIGH ) {
    digitalWrite(9, HIGH );
    delay(500);
  }
    
}
