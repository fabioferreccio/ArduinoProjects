/*
 * Exemplificação de modo rapido de atribuição embora não seja tão trivial, devido a necessidade
 * de conhecimento previo do chip do hardware em que a programação será embarcada.
 * 
 * DDR? -> Substitui o PinMode, onde 1 define uma saida e 0 uma entrada. 
 * PORT? -> Substitui o DigitalWrite, setando HIGH(1) ou LOW(0) no pino desejado. 
 * 
 * OBS: (?) Qual modulo do chip está sendo acessado.
 * 
 * Ex (MEGA 2560): 
 *          PIN_13|PIN_12|PIN_11|PIN_10|PIN_50|PIN_51|PIN_52|PIN_53
 * DDRB ->  0|0|0|1|0|0|0|0; (Porta 10 - SAIDA)
 * PORTB -> 0|0|0|1|0|0|0|0; (Porta 10 - HIGH)
 */

void setup() {
  DDRB = B00010000;

  while(true){
    PORTB = B00010000;
    _delay_ms(1000);
    PORTB = B00000000;
    _delay_ms(1000);
  }
}

void loop() {}
