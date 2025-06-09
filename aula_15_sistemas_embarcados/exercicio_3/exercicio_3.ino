#define pin_led1 8
#define pin_led2 9
#define botao 2
int contador =0;
bool estadoanterior = HIGH;

void setup() {
  pinMode(pin_led1 ,OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(botao, INPUT_PULLUP);

  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, LOW);

}

void loop() {
  bool estadoatual = digitalRead(botao);

  if (estadoanterior == HIGH && estadoatual == LOW){
    (contador <= 50 );
    contador ++;
  }
  if (contador >= 0 && contador <50){
    digitalWrite(pin_led1, 1);
    digitalWrite(pin_led2, 0);
  }
   if (contador ==50){
    digitalWrite(pin_led1, 0);
    digitalWrite(pin_led2, 1); 
   }
   estadoanterior = estadoatual;
  
   delay(1000);
  }
