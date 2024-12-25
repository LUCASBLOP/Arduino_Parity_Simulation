# Arduino_Parity_Simulation
## Bits de Paridade:
Os bits de paridade são informações adicionais associadas a um sinal digital, com o objetivo de auxiliar na detecção de erros durante a transmissão de dados. Entre os métodos convencionais de detecção de erros (como Checksum, CRC, etc.), o método de bits de paridade pode ser considerado um dos mais simples de implementar. A detecção de erros é realizada por meio da contagem do número de bits em nível lógico alto ("1") em um determinado caractere, conforme a tabela ASCII de 8 bits. A esse caractere é adicionado um bit responsável por indicar a paridade do número de bits em nível lógico alto.

Esse bit adicional pode atuar de duas formas: como bit de paridade par ou ímpar. O conceito por trás dessas duas formas é simples. Na paridade par, o bit adicional é ajustado para garantir que o número total de "1's" seja par. Já na paridade ímpar, o bit adicional é ajustado para que o número total de "1's" seja ímpar.
