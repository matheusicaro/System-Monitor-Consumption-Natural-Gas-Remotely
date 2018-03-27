#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

// pin 8 - Serial clock out (SCLK)
// pin 9 - Serial data out (DIN)
// pin 10 - Data/Command select (D/C)
// pin 11 - LCD chip select (CS/CE)
// pin 12 - LCD reset (RST)

Adafruit_PCD8544 display = Adafruit_PCD8544(8, 9, 10, 11, 12);

void setup()   
{
  Serial.begin(9600);
  display.begin();

   //---------------------------------------DISPLAY---------------------------------------
      display.setContrast(60); //Ajusta o contraste do display
      display.clearDisplay();   //Apaga o buffer e o display
      display.setTextSize(1);  //Seta o tamanho do texto
      display.setTextColor(BLACK); //Seta a cor do texto
      display.setCursor(0,0);  //Seta a posição do cursor
      display.setTextColor(BLACK, WHITE);//Texto invertido - Branco com fundo preto
 //---------------------------------------FIM-------------------------------------------

}

void loop()
{

      display.println("Start");//Escreve no display  
      display.display();
      display.println("ENNNNNNNND");//Escreve no display  
      display.display();

      delay(1000);
      display.clearDisplay();   //Apaga o buffer e o display
      
      display.println("KAAAAAAAAAAAAAAA");//Escreve no display  
      display.display();

      delay(1000);
      display.clearDisplay();   //Apaga o buffer e o display
}
