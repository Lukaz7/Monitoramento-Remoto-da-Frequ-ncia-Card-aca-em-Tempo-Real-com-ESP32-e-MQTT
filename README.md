# Monitoramento-Remoto-da-Frequ-ncia-Card-aca-em-Tempo-Real-com-ESP32-e-MQTT
Este projeto oferece uma solução completa para monitorar a frequência cardíaca em tempo real, transmitindo os dados de forma segura e eficiente para visualização remota. Através da combinação do microcontrolador ESP32 com o sensor KY-039 e o protocolo MQTT, é possível acompanhar a saúde cardiovascular de qualquer lugar, a qualquer hora.

Funcionamento

Captura: O sensor KY-039, posicionado no dedo do usuário, utiliza um LED infravermelho e um fototransistor para detectar as variações no fluxo sanguíneo, indicando os batimentos cardíacos.

Processamento: O microcontrolador ESP32 recebe os dados brutos do sensor e, através da biblioteca PulseSensor Playground, calcula a frequência cardíaca em batimentos por minuto (BPM).

Transmissão:  O ESP32, utilizando o protocolo MQTT e a biblioteca PubSubClient, envia os dados da frequência cardíaca para um broker MQTT na nuvem (broker.emqx.io) via conexão Wi-Fi.

Visualização Remota: Qualquer dispositivo (smartphone, tablet, computador) com um cliente MQTT pode se conectar ao broker e receber os dados da frequência cardíaca em tempo real, permitindo o monitoramento remoto e contínuo.

Passo a Passo para Reproduzir o Projeto
Monte o Circuito:

Conecte o sensor KY-039 ao ESP32 conforme o diagrama, utilizando jumpers.
Certifique-se de que o sensor esteja bem fixado ao dedo para garantir leituras precisas.
Instale as Bibliotecas:

Faça o download e instale as bibliotecas PulseSensorPlayground e PubSubClient no Arduino IDE.
Configure o Broker MQTT:

Crie uma conta gratuita no broker.emqx.io.

Crie um novo tópico (por exemplo, "frequencia_cardiaca") para receber os dados do ESP32.
Anote as credenciais de acesso (endereço do broker, porta, nome de usuário e senha).
Carregue o Código:

Abra o código-fonte fornecido no Arduino IDE.

Substitua os valores de ssid, password, mqttServer, mqttPort, mqttUser e mqttPassword pelas suas credenciais de Wi-Fi e MQTT.
Substitua o valor de topic pelo nome do tópico que você criou no broker.
Compile e carregue o código no ESP32.
Software

O código-fonte utiliza as seguintes bibliotecas:

PulseSensorPlayground: Simplifica a leitura e o processamento dos dados do sensor KY-039.
PubSubClient: Implementa o protocolo MQTT para a comunicação com o broker.

As principais variáveis e funções são:

BPM: Armazena o valor da frequência cardíaca calculada.
Signal: Armazena o valor bruto lido do sensor.
Threshold: Define o limiar para a detecção de um batimento cardíaco.
QS: Controla a qualidade de serviço (QoS) da publicação MQTT.
pubTopic: Define o tópico MQTT para a publicação dos dados.

Hardware

ESP32 DEVKIT V1 DOIT: Microcontrolador com Wi-Fi e Bluetooth integrado, responsável pelo processamento dos dados e comunicação com o broker MQTT.
KY-039: Sensor óptico de pulso que utiliza um LED infravermelho e um fototransistor para detectar o pulso.
Jumpers: Fios utilizados para conectar os componentes no circuito.
Interfaces, Protocolos e Módulos de Comunicação
MQTT: Protocolo de mensagens leve e eficiente, ideal para dispositivos IoT.
TCP/IP: Protocolo de comunicação utilizado para a conexão à internet via Wi-Fi.
Wi-Fi: Tecnologia de rede sem fio utilizada para conectar o ESP32 à internet.
I2C: Protocolo de comunicação utilizado para a comunicação entre o ESP32 e o sensor KY-039.
Comunicação/Controle via Internet (TCP/IP) e Uso do Protocolo MQTT
[Incluir imagem de um smartphone recebendo dados de frequência cardíaca do ESP32 através da nuvem]

O ESP32 utiliza o protocolo TCP/IP para se conectar à internet via Wi-Fi. Uma vez conectado, ele estabelece uma conexão com o broker MQTT utilizando o protocolo MQTT sobre TCP/IP.

Outros dispositivos, como smartphones, tablets ou computadores, podem se conectar ao mesmo broker MQTT e se inscrever no tópico "frequencia_cardiaca" para receber os dados da frequência cardíaca em tempo real.

Vantagens do MQTT
Comunicação assíncrona: O ESP32 pode enviar dados sem esperar uma resposta do broker.
Baixo overhead: O protocolo MQTT possui um cabeçalho de mensagem pequeno.
Escalabilidade: O MQTT suporta um grande número de dispositivos conectados.
Observações
O repositório GitHub do projeto inclui um vídeo demonstrativo do funcionamento na plataforma Wokwi, simulando a publicação MQTT.
Os resultados da simulação, incluindo o tempo de resposta da publicação MQTT e o gráfico correspondente, estão disponíveis na seção de resultados do repositório.
