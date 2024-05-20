# Monitoramento-Remoto-da-Frequ-ncia-Card-aca-em-Tempo-Real-com-ESP32-e-MQTT

# Descrição:

Este projeto tem como objetivo criar um sistema de monitoramento da frequência cardíaca (FC) em tempo real, utilizando o microcontrolador ESP32, o sensor KY-039 e o protocolo MQTT. A FC é um indicador vital importante da saúde cardiovascular e o monitoramento contínuo pode auxiliar na detecção precoce de problemas cardíacos e no acompanhamento da resposta a tratamentos.

Devido a problemas com os componentes físicos (ESP32 e sensor KY-039) que apresentaram defeitos e não funcionaram como esperado, o projeto foi desenvolvido e testado em um ambiente de simulação online chamado Wokwi. O Wokwi permite simular o ESP32 e outros componentes eletrônicos, possibilitando o desenvolvimento e teste do código sem a necessidade de hardware físico.

No ambiente Wokwi, o código foi adaptado para simular a leitura dos dados do sensor KY-039 e gerar valores de frequência cardíaca simulados. Esses valores são então processados pelo ESP32 simulado e enviados para um broker MQTT virtual, simulando a comunicação em tempo real.

O sistema desenvolvido é de baixo custo, portátil e flexível, tornando-o ideal para aplicações em saúde personalizada e preventiva. Ele coleta os dados do sensor KY-039, que detecta as variações no fluxo sanguíneo, e os envia para o ESP32 para processamento. O ESP32 calcula a frequência cardíaca e, em seguida, transmite os dados para um broker MQTT através de uma conexão Wi-Fi.

Os dados da frequência cardíaca podem ser visualizados e armazenados em um servidor MQTT ou em um aplicativo móvel, permitindo o monitoramento remoto em tempo real. Isso possibilita que profissionais de saúde ou cuidadores acompanhem a FC do paciente remotamente, oferecendo maior comodidade e acessibilidade.

# Funcionamento:

*Coleta de dados:* No ambiente Wokwi, os dados do sensor KY-039 são simulados, gerando valores de frequência cardíaca que se assemelham aos valores reais.
Processamento de dados: O ESP32 simulado recebe os dados simulados do sensor e os processa utilizando algoritmos de análise de sinal para calcular a frequência cardíaca.
Transmissão de dados: O ESP32 simulado utiliza o protocolo MQTT para publicar os dados da frequência cardíaca simulados em um tópico específico do broker MQTT virtual.
Visualização e armazenamento: Os dados publicados no broker MQTT virtual podem ser acessados e visualizados no ambiente Wokwi, simulando o monitoramento em tempo real.
Componentes de Hardware (Simulados no Wokwi):

ESP32 DEVKIT V1 DOIT: Microcontrolador com Wi-Fi e Bluetooth integrado, responsável pelo processamento dos dados e comunicação com o broker MQTT.
Sensor de batimentos cardíacos KY-039: Sensor óptico que detecta as variações no fluxo sanguíneo para medir a frequência cardíaca.

# Bibliotecas de Software:

PulseSensor Playground: Biblioteca para facilitar a leitura e processamento dos dados do sensor KY-039 (utilizada no código para simular a leitura dos dados).
PubSubClient: Biblioteca para implementar o protocolo MQTT no ESP32.

# Interfaces, Protocolos e Módulos de Comunicação:

I2C: Interface de comunicação utilizada para conectar o sensor KY-039 ao ESP32 (simulada no Wokwi).
Wi-Fi: Tecnologia de comunicação sem fio utilizada para conectar o ESP32 à internet (simulada no Wokwi).
MQTT: Protocolo de comunicação leve e eficiente utilizado para transmitir os dados da frequência cardíaca do ESP32 para o broker MQTT.
Código-Fonte e Documentação:

O código-fonte completo do projeto, incluindo a configuração do ESP32, a leitura dos dados do sensor (simulada), o cálculo da frequência cardíaca e a comunicação MQTT, está disponível no repositório GitHub. A documentação do código inclui comentários explicativos e instruções para executar o projeto no Wokwi.

# Próximos Passos:

Substituir os componentes defeituosos (ESP32 e sensor KY-039) por componentes funcionais.
Testar o sistema com os componentes físicos reais para validar seu funcionamento em um ambiente real.
Implementar recursos adicionais, como alertas em caso de anormalidades na FC e um aplicativo móvel para visualização dos dados.

# Observações:

Este projeto é um protótipo desenvolvido e testado em um ambiente de simulação (Wokwi).
A precisão e o desempenho do sistema em um ambiente real podem variar.
Este projeto não se destina a fins médicos. Consulte um profissional de saúde para obter um diagnóstico preciso.

# Repositório GitHub



[URL inválido removido]

O repositório contém a documentação do código, instruções para executar o projeto no Wokwi e a descrição do hardware simulado.
