



  
#include <avr/pgmspace.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN           2



// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS       1836

#include "xmastree.h"
#include "santa.h"
#include "sleigh.h"
#include "jacko.h"
#include "usflag.h"

const uint8_t *progmem;
        
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int i = 0;
int j = 0;

void setup() {

  Serial.begin(9600);
  Serial.println();
  pixels.begin(); // This initializes the NeoPixel library.

}
 
void loop() {
  
  progmem = xmastree;
  for (i=0,j=0; j < NUMPIXELS*3; i++, j=j+3) {  
    pixels.setPixelColor(i, pixels.Color(pgm_read_word(&progmem[j]),pgm_read_word(&progmem[j+1]),pgm_read_word(&progmem[j+2]))); // Moderately bright green color.
  }       
  pixels.show(); // This sends the updated pixels to the hardware.
  Serial.println("*************");
  delay(5000);

  progmem = santa;
  for (i=0,j=0; j < NUMPIXELS*3; i++, j=j+3) {  
    pixels.setPixelColor(i, pixels.Color(pgm_read_word(&progmem[j]),pgm_read_word(&progmem[j+1]),pgm_read_word(&progmem[j+2]))); // Moderately bright green color.
  }       
  pixels.show(); // This sends the updated pixels to the hardware.
  delay(5000);

  progmem = sleigh;
  for (i=0,j=0; j < NUMPIXELS*3; i++, j=j+3) {  
    pixels.setPixelColor(i, pixels.Color(pgm_read_word(&progmem[j]),pgm_read_word(&progmem[j+1]),pgm_read_word(&progmem[j+2]))); // Moderately bright green color.
  }       
  pixels.show(); // This sends the updated pixels to the hardware.
  delay(5000);

  progmem = usflag;
  for (i=0,j=0; j < NUMPIXELS*3; i++, j=j+3) {  
    pixels.setPixelColor(i, pixels.Color(pgm_read_word(&progmem[j]),pgm_read_word(&progmem[j+1]),pgm_read_word(&progmem[j+2]))); // Moderately bright green color.
  }       
  pixels.show(); // This sends the updated pixels to the hardware.
  delay(5000);

  progmem = jacko;
  for (i=0,j=0; j < NUMPIXELS*3; i++, j=j+3) {  
    pixels.setPixelColor(i, pixels.Color(pgm_read_word(&progmem[j]),pgm_read_word(&progmem[j+1]),pgm_read_word(&progmem[j+2]))); // Moderately bright green color.
  }       
  pixels.show(); // This sends the updated pixels to the hardware.
  delay(5000);
  }

