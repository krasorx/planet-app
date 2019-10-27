// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
#include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>
#include <TimerOne.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            10

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      8

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(8, 10, NEO_GRB + NEO_KHZ800);
SoftwareSerial mySerial(A0, A1); // RX, TX
int delayval = 500; // delay for half a second
long color[3]={0,0,0},diferencia[3]={0,0,0},RGB[3]={0,0,0};
void setup() {

  pixels.begin(); // This initializes the NeoPixel library.
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(9,OUTPUT);

}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
    
    if(mySerial.available())
    {
      int dato = mySerial.read() - 48;
      Serial.println(dato);
      switch (dato)
    {
      case 0:
        color[0]=255;
        color[1]=0;
        color[2]=0;
        
        break;
         case 2:
        color[0]=255;
        color[1]=100;
        color[2]=0;
        break;
      case 3:
      color[0]=100;
        color[1]=255;
        color[2]=0;
       break;
      case 4:
        color[0]=0;
        color[1]=255;
        color[2]=0;
        break;
      case 5:
        color[0]=0;
        color[1]=255;
        color[2]=100;
        break;
      case 6:
        color[0]=0;
        color[1]=100;
        color[2]=255;
        break;
      case 1:
        color[0]=255;
        color[1]=0;
        color[2]=0;
        break;
      case 7:
      Serial.println(dato);
for (int i=0;i<=3;i++)
{
  digitalWrite(9,1);
  delay(100);
    digitalWrite(9,0);
  delay(100);
}
        break;
        case 8:


        break;
        case 9:
        break;
        
    }  
    }

    


        for(int j=0;j<=8 ;j++)
        pixels.setPixelColor(j, pixels.Color(color[0],color[1],color[2])); // Moderately bright green color.
      pixels.show();
      delay(10);
   
     // This sends the updated pixel color to the hardware.

  
}

