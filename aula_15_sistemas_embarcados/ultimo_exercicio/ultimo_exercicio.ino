int leds[] = {8, 9, 10, 11};  // Pinos dos LEDs
int contador = 0;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }

}

void loop() {
   contador++;
  if (contador > 15) {
    contador = 0;
  }

  delay(500); 

}
