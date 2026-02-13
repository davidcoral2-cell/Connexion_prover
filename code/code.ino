// Probador de continuidad básico

const int pinPrueba = 2;
const int led = 13;
const int buzzer = 8;

void setup() {
  pinMode(pinPrueba, INPUT_PULLUP);  // Activamos resistencia interna
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int estado = digitalRead(pinPrueba);

  if (estado == LOW) {  // LOW = hay continuidad
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    Serial.println("Hay continuidad!");
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    Serial.println("No hay continuidad...");
  }

  delay(200);
}
