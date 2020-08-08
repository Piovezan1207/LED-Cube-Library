#include <Arduino.h>
#include <LEDCube.h>

Cube Cubo(13, 12, 11, 8, 9, 10, 7, 6, 5, 2, 3, 4);

void setup()
{
  Cubo.Config();
}

void loop()
{
  Cubo.Efeitos(1);
}