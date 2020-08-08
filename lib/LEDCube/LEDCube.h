/* Vinicius Piovezan - Agosto 2020

    Biblioteca de controle para cubo LED 3x3x3

*/

#ifndef LEDCube
#define LEDCube

#include "Arduino.h"
#include "avr/io.h"

class Cube
{
public:
    Cube(int Andar1, int Andar2, int Andar3, int LED1, int LED2, int LED3, int LED4, int LED5, int LED6, int LED7, int LED8, int LED9)
    {
        byte LEDD[3][10] = {{
                                Andar1,
                                LED1,
                                LED2,
                                LED3,
                                LED4,
                                LED5,
                                LED6,
                                LED7,
                                LED8,
                                LED9,
                            },
                            {
                                Andar2,
                                LED1,
                                LED2,
                                LED3,
                                LED4,
                                LED5,
                                LED6,
                                LED7,
                                LED8,
                                LED9,
                            },
                            {
                                Andar3,
                                LED1,
                                LED2,
                                LED3,
                                LED4,
                                LED5,
                                LED6,
                                LED7,
                                LED8,
                                LED9,
                            }};

        for (int i = 0; i < 3; i++)
        {
            for (int ii = 0; ii < 10; ii++)
            {
                LED[i][ii] = LEDD[i][ii];
            }
        }
    }
    void Efeitos(int Num);

private:
    //int Andar1X, Andar2X, Andar3X, LED1X, LED2X, LED3X, LED4X, LED5X, LED6X, LED7X, LED8X, LED9X;
    byte LED[3][10];
    void Acender(byte Andar, byte Luz, bool Estado)
    {
        digitalWrite(LED[Andar - 1][0], !Estado);
        digitalWrite(LED[Andar - 1][Luz], Estado);
    }
};

#endif