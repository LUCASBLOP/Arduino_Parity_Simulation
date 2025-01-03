# Arduino_Parity_Simulation
## Bits de Paridade:
<div align="justify">
   Os bits de paridade são informações adicionais associadas a um sinal digital, com o objetivo de auxiliar na detecção de erros durante a transmissão de dados. Entre os métodos convencionais de detecção de erros (como Checksum, CRC, etc.), o método de bits de paridade pode ser considerado um dos mais simples de implementar. A detecção de erros é realizada por meio da contagem do número de bits em nível lógico alto ("1") em um determinado caractere, conforme a tabela ASCII de 8 bits. A esse caractere é adicionado um bit responsável por indicar a paridade do número de bits em nível lógico alto.

Esse bit adicional pode atuar de duas formas: como bit de paridade par ou ímpar. O conceito por trás dessas duas formas é simples. Na paridade par, o bit adicional é ajustado para garantir que o número total de "1's" seja par. Já na paridade ímpar, o bit adicional é ajustado para que o número total de "1's" seja ímpar. Uma visão ilustrativa desse conceito está presente logo abaixo:
</div>

![Parity_ex](https://github.com/user-attachments/assets/ee5b3092-142f-478e-a01f-586e636a3bc1)

## Simulação no Arduino Uno R3:
<div align="justify">
Esse repositório foi criado com o objetivo de simular a detecção de erros pelo método dos bits de paridade. A simulação foi executada no web site tinkercad e os materiais utilizados foram um Arduino Uno R3 e um Display LCD 16x2. Para a comunicação entre o microcontrolador Arduino e o Display foi implementado o protocolo I2C. Na simulação, uma menssagem é enviada para o display e em seguida é contado o número de bits com nível lógico "1" presente na mensagem. Ao final da simulação, um bit de paridade é exposto no display, assim como a contagem de "1's". A simulação foi feita com a mensagem " Hello World" e pode ser observada por meio do GIF abaixo:
</div>

![Simul_Correta](https://github.com/user-attachments/assets/dc27f3cb-e318-4e97-8924-b5db82832d0f)

<div align="justify">
No momento em que ocorre um erro na transmissão da mensagem, o bit de paridade terá um valor diferente do original, sinalizando para o transmissor que a mensagem deve ser reenviada ao receptor. Contudo, existe a possibilidade de ocorrer um número par de erros, e, nesse caso, o bit de paridade da mensagem original seria mantido. Esse é um dos grandes problemas do método dos bits de paridade: apesar de ser de fácil implementação, ele pode não detectar erros quando um número par de falhas acontece. Para simular uma situação de erro, foi enviada a mensagem "Hallo World", substituindo o caractere "e" por "a". Nesse caso, houve uma mudança no bit de paridade, que passou de "1" (presente na mensagem original) para "0" ( presente na mensagem com erro). A simulação com a mensagem contendo erro pode ser observada no GIF abaixo:
</div>


![Simul_Incorrect](https://github.com/user-attachments/assets/fb6fd1d7-78a3-442d-b285-6232f4b67a1a)



