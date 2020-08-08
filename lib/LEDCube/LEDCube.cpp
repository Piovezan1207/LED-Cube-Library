/*
*/

#include "Arduino.h"
#include "avr/io.h"
#include "LEDCube.h"

void Cube::Efeitos(int Num)
{

    switch (Num)
    {
    case 1:
        for (int iii = 0; iii < 200; iii++)
        {
            for (int ii = 1; ii < 4; ii++)
            {
                for (int i = 1; i < 10; i++)
                {
                    Acender(ii, i, HIGH);
                    delayMicroseconds(100);
                    Acender(ii, i, LOW);
                }
            }
        }
        break;
    case 2:
        for (byte i = 0; i < 3; i++)
        {
            digitalWrite(LED[i][0], LOW);
            for (byte ii = 1; ii < 10; ii++)
            {
                digitalWrite(LED[i][ii], HIGH);
                delay(30);
                digitalWrite(LED[i][ii], LOW);
                delay(15);
            }
            digitalWrite(LED[i][0], HIGH);
        }
        break;

    case 3:
        for (int i = 2; i >= 0; i--)
        {
            digitalWrite(LED[i][0], LOW);
            for (byte ii = 9; ii >= 1; ii--)
            {
                digitalWrite(LED[i][ii], HIGH);
                delay(30);
                digitalWrite(LED[i][ii], LOW);
                delay(15);
            }
            digitalWrite(LED[i][0], HIGH);
        }
        break;
    case 4:
        digitalWrite(LED[0][0], LOW);
        digitalWrite(LED[1][0], LOW);
        digitalWrite(LED[2][0], LOW);
        for (byte ii = 1; ii < 10; ii++)
        {
            for (byte i = 0; i < 3; i++)
            {
                digitalWrite(LED[i][ii], HIGH);
                delay(30);
                digitalWrite(LED[i][ii], LOW);
                delay(15);
            }
        }
        digitalWrite(LED[0][0], HIGH);
        digitalWrite(LED[1][0], HIGH);
        digitalWrite(LED[2][0], HIGH);
        break;
    case 5:
        digitalWrite(LED[0][0], LOW);
        digitalWrite(LED[1][0], LOW);
        digitalWrite(LED[2][0], LOW);
        for (byte ii = 9; ii >= 1; ii--)
        {
            for (int i = 2; i >= 0; i--)
            {
                digitalWrite(LED[i][ii], HIGH);
                delay(30);
                digitalWrite(LED[i][ii], LOW);
                delay(15);
            }
        }
        digitalWrite(LED[0][0], HIGH);
        digitalWrite(LED[1][0], HIGH);
        digitalWrite(LED[2][0], HIGH);
        break;
    case 6:
        for (byte i = 0; i < 3; i++)
        {
            digitalWrite(LED[i][0], LOW);
            for (byte ii = 0; ii < 100; ii++)
            {
                for (byte iii = 1; iii < 10; iii++)
                {
                    digitalWrite(LED[i][iii], HIGH);
                    delayMicroseconds(100);
                    digitalWrite(LED[i][iii], LOW);
                }
            }

            digitalWrite(LED[i][0], HIGH);
        }
        break;
    case 7:
        for (int i = 2; i >= 0; i--)
        {
            digitalWrite(LED[i][0], LOW);
            for (byte ii = 0; ii < 100; ii++)
            {
                for (byte iii = 1; iii < 10; iii++)
                {
                    digitalWrite(LED[i][iii], HIGH);
                    delayMicroseconds(100);
                    digitalWrite(LED[i][iii], LOW);
                }
            }

            digitalWrite(LED[i][0], HIGH);
        }
        break;
    case 8:
        byte Vet0[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};
        for (int i = 0; i < 3; i++)
        {
            for (int ii = 0; ii < 3; ii++)
                digitalWrite(LED[0][Vet0[i][ii]], HIGH);
            for (int iiii = 0; iiii < 300; iiii++)
            {

                for (int iii = 0; iii < 3; iii++)
                {
                    digitalWrite(LED[iii][0], LOW);
                    delayMicroseconds(100);
                    digitalWrite(LED[iii][0], HIGH);
                }
            }

            for (int ii = 0; ii < 3; ii++)
                digitalWrite(LED[0][Vet0[i][ii]], LOW);
            delay(15);
        }
        break;
    case 9:
        byte Vet1[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};
        for (int i = 2; i >= 0; i--)
        {
            for (int ii = 0; ii < 3; ii++)
                digitalWrite(LED[0][Vet1[i][ii]], HIGH);
            for (int iiii = 0; iiii < 300; iiii++)
            {

                for (int iii = 0; iii < 3; iii++)
                {
                    digitalWrite(LED[iii][0], LOW);
                    delayMicroseconds(100);
                    digitalWrite(LED[iii][0], HIGH);
                }
            }

            for (int ii = 0; ii < 3; ii++)
                digitalWrite(LED[0][Vet1[i][ii]], LOW);
            delay(15);
        }
        break;
    case 10:
        byte Vet2[3][3] = {{3, 6, 9}, {2, 5, 8}, {1, 4, 7}};
        for (int i = 0; i < 3; i++)
        {
            for (int ii = 0; ii < 3; ii++)
                digitalWrite(LED[0][Vet2[i][ii]], HIGH);
            for (int iiii = 0; iiii < 300; iiii++)
            {

                for (int iii = 0; iii < 3; iii++)
                {
                    digitalWrite(LED[iii][0], LOW);
                    delayMicroseconds(100);
                    digitalWrite(LED[iii][0], HIGH);
                }
            }

            for (int ii = 0; ii < 3; ii++)
                digitalWrite(LED[0][Vet2[i][ii]], LOW);
            delay(15);
        }
        break;
    case 11:
        byte Vet[3][3] = {{3, 6, 9}, {2, 5, 8}, {1, 4, 7}};
        for (int i = 2; i >= 0; i--)
        {
            for (int ii = 0; ii < 3; ii++)
                digitalWrite(LED[0][Vet[i][ii]], HIGH);
            for (int iiii = 0; iiii < 300; iiii++)
            {

                for (int iii = 0; iii < 3; iii++)
                {
                    digitalWrite(LED[iii][0], LOW);
                    delayMicroseconds(100);
                    digitalWrite(LED[iii][0], HIGH);
                }
            }

            for (int ii = 0; ii < 3; ii++)
                digitalWrite(LED[0][Vet[i][ii]], LOW);
            delay(15);
        }
        break;
    case 12:
        byte Vet4[8] = {1, 2, 3, 6, 9, 8, 7, 4};
        for (int i = 0; i < 3; i++)
        {
            digitalWrite(LED[i][0], LOW);
            for (int ii = 0; ii < 8; ii++)
            {
                digitalWrite(LED[i][Vet4[ii]], HIGH);
                delay(30);
                digitalWrite(LED[i][Vet4[ii]], LOW);
                delay(15);
            }

            digitalWrite(LED[i][0], HIGH);
        }
        break;
    case 13:
        byte Vet5[8] = {1, 2, 3, 6, 9, 8, 7, 4};
        for (int i = 2; i >= 0; i--)
        {
            digitalWrite(LED[i][0], LOW);
            for (int ii = 0; ii < 8; ii++)
            {
                digitalWrite(LED[i][Vet5[ii]], HIGH);
                delay(30);
                digitalWrite(LED[i][Vet5[ii]], LOW);
                delay(15);
            }

            digitalWrite(LED[i][0], HIGH);
        }
        break;
    case 14:
        byte Vet6[3][3] = {{LED[0][7], LED[0][8], LED[0][9]}, {LED[0][4], LED[0][5], LED[0][6]}, {LED[0][1], LED[0][2], LED[0][3]}};
        for (int iii = 0; iii < 3; iii++)
        {
            byte Vet7[4][4] = {{LED[0][0], Vet6[iii][0], Vet6[iii][1], Vet6[iii][2]}, {Vet6[iii][2], LED[0][0], LED[1][0], LED[2][0]}, {11, Vet6[iii][2], Vet6[iii][1], Vet6[iii][0]}, {Vet6[iii][0], LED[2][0], LED[1][0], LED[0][0]}};
            bool Flag = HIGH;
            for (int i = 0; i < 4; i++)
            {
                Flag = !Flag;
                digitalWrite(Vet7[i][0], Flag);
                for (int ii = 0; ii < 4; ii++)
                {
                    digitalWrite(Vet7[i][ii], !Flag);
                    delay(20);
                    digitalWrite(Vet7[i][ii], Flag);
                    delay(5);
                }

                digitalWrite(Vet7[i][0], !Flag);
            }
        }
        break;
    case 15:
        byte Vet8[3][3] = {{LED[0][7], LED[0][8], LED[0][9]}, {LED[0][4], LED[0][5], LED[0][6]}, {LED[0][1], LED[0][2], LED[0][3]}};
        for (int iii = 2; iii >= 0; iii--)
        {
            byte Vet9[4][4] = {{LED[0][0], Vet8[iii][0], Vet8[iii][1], Vet8[iii][2]}, {Vet8[iii][2], LED[0][0], LED[1][0], LED[2][0]}, {11, Vet8[iii][2], Vet8[iii][1], Vet8[iii][0]}, {Vet8[iii][0], LED[2][0], LED[1][0], LED[0][0]}};
            bool Flag = HIGH;
            for (int i = 0; i < 4; i++)
            {
                Flag = !Flag;
                digitalWrite(Vet9[i][0], Flag);
                for (int ii = 0; ii < 4; ii++)
                {
                    digitalWrite(Vet9[i][ii], !Flag);
                    delay(20);
                    digitalWrite(Vet9[i][ii], Flag);
                    delay(5);
                }

                digitalWrite(Vet9[i][0], !Flag);
            }
        }
        break;
    case 16:
        byte Vet10[3][3] = {{LED[0][3], LED[0][6], LED[0][9]}, {LED[0][2], LED[0][5], LED[0][8]}, {LED[0][1], LED[0][4], LED[0][7]}};
        for (int iii = 0; iii < 3; iii++)
        {
            byte Vet11[4][4] = {{LED[0][0], Vet10[iii][0], Vet10[iii][1], Vet10[iii][2]}, {Vet10[iii][2], LED[0][0], LED[1][0], LED[2][0]}, {11, Vet10[iii][2], Vet10[iii][1], Vet10[iii][0]}, {Vet10[iii][0], LED[2][0], LED[1][0], LED[0][0]}};
            bool Flag = HIGH;
            for (int i = 0; i < 4; i++)
            {
                Flag = !Flag;
                digitalWrite(Vet11[i][0], Flag);
                for (int ii = 0; ii < 4; ii++)
                {
                    digitalWrite(Vet11[i][ii], !Flag);
                    delay(20);
                    digitalWrite(Vet11[i][ii], Flag);
                    delay(5);
                }

                digitalWrite(Vet11[i][0], !Flag);
            }
        }
        break;
    case 17:
        byte Vet12[3][3] = {{LED[0][3], LED[0][6], LED[0][9]}, {LED[0][2], LED[0][5], LED[0][8]}, {LED[0][1], LED[0][4], LED[0][7]}};
        for (int iii = 2; iii >= 0; iii--)
        {
            byte Vet13[4][4] = {{LED[0][0], Vet12[iii][0], Vet12[iii][1], Vet12[iii][2]}, {Vet12[iii][2], LED[0][0], LED[1][0], LED[2][0]}, {11, Vet12[iii][2], Vet12[iii][1], Vet12[iii][0]}, {Vet12[iii][0], LED[2][0], LED[1][0], LED[0][0]}};
            bool Flag = HIGH;
            for (int i = 0; i < 4; i++)
            {
                Flag = !Flag;
                digitalWrite(Vet13[i][0], Flag);
                for (int ii = 0; ii < 4; ii++)
                {
                    digitalWrite(Vet13[i][ii], !Flag);
                    delay(20);
                    digitalWrite(Vet13[i][ii], Flag);
                    delay(5);
                }

                digitalWrite(Vet13[i][0], !Flag);
            }
        }
        break;
    case 18:
        break;
    case 19:
        break;
    case 20:
        break;
    }
}
