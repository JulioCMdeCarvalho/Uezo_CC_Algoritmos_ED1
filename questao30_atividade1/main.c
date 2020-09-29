#include <stdio.h>
#include <stdlib.h>

/*
30. As distâncias entre 6 cidades são dadas pela matriz a seguir:
//add matriz later
Calcular e escrever a distância percorrida por alguém
que sai da cidade C e vai para a cidade A
pela rota: C – D – B – E – F – A.

*/


int main()
{
    int resultado, CD, DB, EF, FA;

    CD = 10;
    DB = 150;
    EF = 110;
    FA = 190;

    resultado = CD+DB+EF+FA;

    printf("A distancia percorrida foi de: %d",resultado," km.");

}
