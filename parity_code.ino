//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Definições 
	// Pino de Dados
#define Pin_dados A4
	// Pino de Clock
#define Pin_clk A5
	// Bits por segundo
#define Bit_sec 5 


//Inicializações
LiquidCrystal_I2C lcd(0x20,16,2);  // Configura o LCD para o endereço 0x20, 16 colunas e 2 linhas

const char *message = "Hallo World"; // Menssagem transmitida
  
int cont_1 = 0;// Contador de número 1's
  
void setup()
{ 
  lcd.init();// Inicializa o lcd
  lcd.backlight();// Liga a luz de fundo do lcd
  
  // Define Pinos de saída
  pinMode(Pin_dados,OUTPUT);
  pinMode(Pin_clk,OUTPUT);
  
  
  lcd.setCursor(0,0);
  
  
  lcd.print(message);
  
  // Laço para analise do código binário de cada letra da menssagem
  for( int i = 0; i < strlen(message);i++){
    
    char elem_byte = message[i];// char i da menssagem
    
    lcd.noCursor();
    lcd.setCursor(0,1); 
    lcd.print("                ");
    lcd.setCursor(i,0);
    
    // Laço para contagem de 1's
    for( int j=0; j<8; j++){
      
      bool elem_bit = elem_byte & (0x80 >> j);
      digitalWrite(Pin_dados,elem_bit);
      delay((1000/Bit_sec)/2);
      
      lcd.noCursor();
      lcd.setCursor(j,1); 
      lcd.print(elem_bit ? "1":"0");// Printa a str em binário
      if(elem_bit) cont_1 += 1;// Contabiliza os 1's
      lcd.setCursor(i,0);
      lcd.cursor();
      
      digitalWrite(Pin_clk, HIGH);
      delay((1000/Bit_sec)/2);
      digitalWrite(Pin_dados, LOW);
      
    }
      
  }
  
  lcd.noCursor();
 
  digitalWrite(Pin_clk, LOW);
  
  // Condicional para escolha do bit de paridade
  if(cont_1%2){
    
    lcd.setCursor(15,1);
    lcd.print("1");
  
  }
  
  else{
    
    lcd.setCursor(15,1);
    lcd.print("0"); 
    
  }
  
  lcd.setCursor(12,0);
  lcd.print("N:");
   lcd.setCursor(14,0);
  lcd.print(cont_1);
  
  
  lcd.setCursor(11,1);
  lcd.print("bit:");
  
    

}


void loop()
{
}