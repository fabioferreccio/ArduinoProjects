/*
 * Projeto consiste no acionamento de um LED utilizando resistor pullup do arduino.
 * PIN 2 -> Ligado no botão de forma direta com a saida ligada no GND.
 * PIN 3 ou PIN 13 -> Utilizando LED Externo com Resistor de 150 ohm, ou em caso de ausencia pode ser utilizado o proprio LED do arduino na porta 13.
 */

#define btnLed 2
#define outLed 3

void setup() {
  //Serial.begin(9600);
  pinMode(btnLed,INPUT_PULLUP);
  pinMode(outLed, OUTPUT);
}

void loop() {
  uint8_t inputValue = digitalRead(btnLed);
  if (inputValue == LOW) {
    //Serial.println(inputValue, DEC);
    digitalWrite(outLed, !digitalRead(outLed));
    delay(500);
  }
}
