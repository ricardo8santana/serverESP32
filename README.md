💡 Projeto IoT: Controle de LEDs com ESP32 via Web Server
Este projeto demonstra como criar um ponto de acesso Wi-Fi com o ESP32 e controlar dois LEDs remotamente através de uma interface web. Ideal para aplicações de automação residencial e aprendizado de IoT.
📦 Funcionalidades

Criação de um ponto de acesso Wi-Fi com nome e senha personalizados.
Interface web responsiva para controle de dois LEDs.
Botões para ligar e desligar cada LED individualmente.
Página HTML estilizada com CSS embutido.

🛠️ Tecnologias Utilizadas

ESP32
Linguagem C++ (Arduino)
Bibliotecas:

WiFi.h
WebServer.h



🔌 Conexões

LED 1 conectado ao pino GPIO 14
LED 2 conectado ao pino GPIO 33

🌐 Acesso ao Servidor
Após carregar o código no ESP32:

O dispositivo cria um ponto de acesso Wi-Fi com:

SSID: IoT01-senac-Ricardo
Senha: 123456789


Conecte-se a essa rede com seu celular ou computador.
Acesse o IP exibido no monitor serial (geralmente 192.168.4.1) via navegador.
Use os botões da interface para controlar os LEDs.

📄 Estrutura do Código

setup(): Inicializa o ponto de acesso, configura os pinos e define as rotas do servidor.
loop(): Mantém o servidor web ativo.
Rotas:

/ → Página principal
/liga1 → Liga LED 1
/desliga1 → Desliga LED 1
/liga2 → Liga LED 2
/desliga2 → Desliga LED 2



🖼️ Interface Web
A interface é simples e intuitiva, com botões verdes para ligar e vermelhos para desligar os LEDs. O layout é responsivo e otimizado para dispositivos móveis.
👨‍🏫 Créditos
Projeto desenvolvido por Luis Ricardo
