

#include <Servo.h>

Servo esquerdinha;
Servo direitao;
   
void setup() {
  esquerdinha.attach(10); 
  direitao.attach(11); 
}

void loop() {

  esquerda();
}

void frente() {
  esquerdinha.write(180);
direitao.write(0);

}
void tras() {
  esquerdinha.write(0);
direitao.write(180);

}
void direita() {
  esquerdinha.write(180);
direitao.write(90);

}
void esquerda() {
  esquerdinha.write(90);
direitao.write(0);

}

