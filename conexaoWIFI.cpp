#include <ESP8266WiFi.h>

const char* nomeWiFi = "";
const char* senhaWiFi = "";

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  WiFi.mode(WIFI_STA);

  WiFi.begin(nomeWiFi, senhaWiFi);

  while(WiFi.status()!=WL_CONNECTED){
    Serial.println("Conectando...");
    delay(1000);
  }

  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  Serial.print("Sinal: ");
  Serial.print(WiFi.RSSI());

}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

}
