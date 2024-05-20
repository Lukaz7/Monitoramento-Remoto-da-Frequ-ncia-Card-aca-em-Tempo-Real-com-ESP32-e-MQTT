#include <Arduino.h> // Inclui a biblioteca Arduino para usar os recursos básicos

int heartRate = 75; // Valor inicial da frequência cardíaca
unsigned long lastBeatTime = 0; // Tempo da última batida (inicializado com 0)

unsigned long tempoAntes;
unsigned long tempoDepois;

void setup() {
  Serial.begin(115200); // Inicializa a comunicação serial com baud rate de 115200

  randomSeed(analogRead(0)); // Inicializa o gerador de números aleatórios
}

void loop() { // Loop principal do programa (executado repetidamente)
  // Simulação de frequência cardíaca
  heartRate = random(50, 101); // Gera um valor aleatório entre 50 e 100 bpm

  char msg[50]; // Cria um array de caracteres para armazenar a mensagem

  snprintf(msg, 50, "{\"heartRate\":%d}", heartRate); // Formata a mensagem em JSON

  tempoAntes = millis(); // Armazena o tempo antes da simulação de publicação MQTT

  // Simula a publicação MQTT
  Serial.print("Publicando no MQTT: ");
  Serial.println(msg);

  tempoDepois = millis(); // Armazena o tempo depois da simulação de publicação MQTT

  Serial.print("Tempo de publicação MQTT: ");
  Serial.println(tempoDepois - tempoAntes); // Calcula e exibe o tempo de publicação

  Serial.print("Frequência Cardíaca simulada: ");
  Serial.println(heartRate);

  delay(1000); // Aguarda 1 segundo antes de repetir o loop
}
