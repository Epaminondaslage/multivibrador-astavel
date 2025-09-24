// Codigo para Arduino Uno
// Multivibrador Astavel 

// Definição dos pinos dos LEDs
const int led1 = 8;
const int led2 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH); // Acende o LED 1
  digitalWrite(led2, LOW);  // Apaga o LED 2
  delay(500); // Aguarda 500ms

  digitalWrite(led1, LOW);  // Apaga o LED 1
  digitalWrite(led2, HIGH); // Acende o LED 2
  delay(500); // Aguarda 500ms