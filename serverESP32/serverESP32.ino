#include <WiFi.h>
#include <WebServer.h>

//Nome e senha do ponto de acesso
const char* ssid = "IoT01-senac-Ricardo";
const char* password = "123456789";

//Criar um servidor web na porta 80
WebServer server(80);

//Página HTML que vai ser exibida nesse servidor 
String HTMLPage = R"rawliteral(
  <!DOCTYPE html>
  <html>
  <body>
  <h1>Turma de IoT - Senac L13</h1>
  <p>Você está conecrtado ao servidor de <strong>Luis Ricardo</strong></p>
  </body>
  </html>
)rawliteral";

void handleRoot(){
  server.send(200, "text/html", htmlPage);

}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Configurando Access Point");

  //Inicia o Ponto de Acesso
  WiFi.softAP(ssid, password);

  //Exibir o IP do ESP32
  Serial.print("IP do ESP32:");
  Serial.println(WiFi.softAPIP());

  //Definir a rota em que a nossa página vai ser exibida(/)
  server.on("/", handeleRoot);

  //Iniciar o Servidor
  server.begin();
  Serial.println("Servidor web iniciada!");

}

void loop() {
  // Configuração que mantem o servidor ativo
  server.handleClient();

}
