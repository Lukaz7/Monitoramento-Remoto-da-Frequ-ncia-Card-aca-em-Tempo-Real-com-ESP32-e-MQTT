# Descrição

Este projeto tem como objetivo desenvolver um sistema de monitoramento da frequência cardíaca (FC) em tempo real, utilizando o microcontrolador ESP32, a plataforma Arduino, o sensor KY-039 e o protocolo MQTT. A FC é um indicador vital importante da saúde cardiovascular e o monitoramento contínuo pode auxiliar na detecção precoce de problemas cardíacos e no acompanhamento da resposta a tratamentos.

Devido a problemas com os componentes físicos (ESP32 e sensor KY-039), o projeto foi desenvolvido e testado em um ambiente de simulação online chamado Wokwi. O Wokwi é uma plataforma que permite simular circuitos eletrônicos e programar microcontroladores de forma virtual, facilitando o desenvolvimento e teste de projetos sem a necessidade de hardware físico.

No ambiente Wokwi, o código foi adaptado para simular a leitura dos dados do sensor KY-039 e gerar valores de frequência cardíaca simulados. Esses valores são então processados pelo ESP32 simulado e enviados para um broker MQTT virtual, simulando a comunicação em tempo real.

O sistema desenvolvido é de baixo custo, portátil e flexível, tornando-o ideal para aplicações em saúde personalizada e preventiva. Ele coleta os dados do sensor KY-039, que detecta as variações no fluxo sanguíneo, e os envia para o ESP32 para processamento. O ESP32 calcula a frequência cardíaca e, em seguida, transmite os dados para um broker MQTT através de uma conexão Wi-Fi.

Os dados da frequência cardíaca podem ser visualizados e armazenados em um servidor MQTT ou em um aplicativo móvel, permitindo o monitoramento remoto em tempo real. Isso possibilita que profissionais de saúde ou cuidadores acompanhem a FC do paciente remotamente, oferecendo maior comodidade e acessibilidade.

# Objetivo:
Criar um sistema de baixo custo, portátil e flexível para monitorar a frequência cardíaca em tempo real, com potencial para aplicações em saúde personalizada e preventiva.

# Componentes:
ESP32 DEVKIT V1 DOIT.
Sensor de batimentos cardíacos KY-039.
Jumpers.

# Bibliotecas:
PulseSensor Playground 
PubSubClient

# Instalação:
Clone o repositório: git clone https://github.com/seu-usuario/monitor-frequencia-cardiaca.git 
Instale as bibliotecas necessárias no Arduino IDE. 
Conecte o sensor KY-039 ao ESP32 conforme o diagrama de conexões (disponível no repositório). 
Configure as credenciais de Wi-Fi e o endereço do broker MQTT no código (main.ino). 
Compile e envie o código para o ESP32.

# Funcionamento:
O sensor KY-039 detecta as variações no fluxo sanguíneo e envia os dados para o ESP32. O ESP32 processa os dados e calcula a frequência cardíaca. O ESP32 se conecta ao Wi-Fi e publica os dados da frequência cardíaca no broker MQTT. Os dados podem ser visualizados e armazenados em um servidor MQTT ou aplicativo móvel.

# Problemas Encontrados:
O sensor KY-039 e o ESP32 utilizados inicialmente apresentaram defeitos, impedindo a coleta e transmissão de dados reais. O projeto foi testado em simulação no Wokwi para validar a comunicação MQTT e o envio de dados simulados.

# Próximos Passos:
Substituir o sensor KY-039 e o ESP32 por componentes funcionais. Realizar testes com dados reais para validar o sistema. Implementar recursos adicionais, como: Alertas em caso de anormalidades na FC. Um aplicativo móvel para visualização dos dados.

# Contribuições:
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests no repositório.

# Observações:
O código completo e funcional está disponível no repositório: https://github.com/Lukaz7/Monitoramento-Remoto-da-Frequ-ncia-Card-aca-em-Tempo-Real-com-ESP32-e-MQTT.git 
As credenciais de Wi-Fi, o endereço do broker MQTT e o tópico MQTT devem ser configurados no código (main.ino). 
Wokwi: Plataforma de simulação online que permite a prototipagem virtual de projetos eletrônicos, incluindo a simulação do ESP32 e outros componentes. 
Broker MQTT: Para a simulação, você pode utilizar um broker MQTT público gratuito, como o broker.emqx.io, ou configurar um broker local em seu computador.

Este projeto oferece uma base sólida para o desenvolvimento de um sistema de monitoramento remoto da frequência cardíaca em tempo real. Com a substituição dos componentes defeituosos e a realização de testes adicionais, ele tem o potencial de se tornar uma ferramenta valiosa para o monitoramento da saúde cardiovascular.
