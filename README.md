# Arduino_Parity_Simulation
## Bits de Paridade:
<div align="justify">
   Os bits de paridade são informações adicionais associadas a um sinal digital, com o objetivo de auxiliar na detecção de erros durante a transmissão de dados. Entre os métodos convencionais de detecção de erros (como Checksum, CRC, etc.), o método de bits de paridade pode ser considerado um dos mais simples de implementar. A detecção de erros é realizada por meio da contagem do número de bits em nível lógico alto ("1") em um determinado caractere, conforme a tabela ASCII de 8 bits. A esse caractere é adicionado um bit responsável por indicar a paridade do número de bits em nível lógico alto.

Esse bit adicional pode atuar de duas formas: como bit de paridade par ou ímpar. O conceito por trás dessas duas formas é simples. Na paridade par, o bit adicional é ajustado para garantir que o número total de "1's" seja par. Já na paridade ímpar, o bit adicional é ajustado para que o número total de "1's" seja ímpar. Uma visão ilustrativa desse conceito está presente logo abaixo:
</div>

![Parity_ex](https://github.com/user-attachments/assets/ee5b3092-142f-478e-a01f-586e636a3bc1)

## Simulação no Arduino Uno R3:
Esse repositório foi criado com o objetivo de simular a detecção de erros pelo método dos bits de paridade. A simulação foi executada no web site tinkercad e os materiais utilizados foram um Arduino Uno R3 e um Display LCD 16x2. Para a comunicação entre o microcontrolador Arduino e o Display foi implementado o protocolo I2C. Na simulação, uma menssagem é enviada para o display e em seguida é contado o número de bits com nível lógico "1" presente na menssagem. Ao final da simulação, um bit de paridade é exposto no display, assim como a contagem de "1's".
![Design sem nome](https://github.com/user-attachments/assets/f1cb035f-051b-47b6-9f08-6536b0600b45)

