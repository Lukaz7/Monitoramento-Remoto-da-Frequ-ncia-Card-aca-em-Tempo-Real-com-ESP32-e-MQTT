#include <WiFi.h>
#include <PubSubClient.h>
#include "PulseSensorPlayground.h"
#define WIFI_MODE_APSTA
#include <WiFi.h>


// Configurações Wi-Fi
const char* ssid = "VIVO-2BC8";
const char* password = "3CKnR3C4HA";

// Configurações MQTT
const char* mqttServer = "broker.emqx.io"; // Broker MQTT público
const int mqttPort = 1883;
const char* topic = "lucas/frequencia_cardiaca"; // Tópico MQTT para publicar os dados

WiFiClient espClient;
PubSubClient client(espClient);

// Configuração do sensor de pulso KY-039
const int PULSE_SENSOR_PIN = 32; // Pino do ESP32 conectado ao sinal do sensor
const int LED_PIN = 2; // Pino do ESP32 conectado ao LED do sensor (opcional)
int threshold = 550; // Valor de limiar para detecção de batimentos
PulseSensorPlayground pulseSensor;

void setup() {
  Serial.begin(115200); // Inicializa a comunicação serial para debug

  // Configuração do sensor de pulso
  pulseSensor.analogInput(PULSE_SENSOR_PIN);
  pulseSensor.setThreshold(threshold);

  // Conexão Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando ao Wi-Fi...");
  }
  Serial.println("Conectado ao Wi-Fi!");

  // Conexão MQTT
  client.setServer(mqttServer, mqttPort);
  if (client.connect("ESP32_Client")) { // Conecta com um ID de cliente
    Serial.println("Conectado ao broker MQTT!");
  }
}

void loop() {
  // Mantém a conexão MQTT
  if (!client.connected()) {
    if (client.connect("ESP32_Client")) {
      Serial.println("Reconectado ao broker MQTT!");
    }
  }
  client.loop();

  // Lê os dados do sensor de pulso
  int myBPM = pulseSensor.getBeatsPerMinute();

  // Verifica se um batimento cardíaco foi detectado
  if (pulseSensor.sawStartOfBeat()) {
    // Publica os dados no tópico MQTT
    char mensagem[20];
    snprintf(mensagem, 20, "%d", myBPM); 
    client.publish(topic, mensagem);
    Serial.print("Frequência cardíaca: ");
    Serial.println(myBPM);
  }

  delay(20); // Aguarda um curto período antes da próxima leitura
}
