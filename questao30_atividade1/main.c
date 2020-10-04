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
    int mat[6][6],resultado,i, j;

    //matriz
    mat[0][0] = 0;
    mat[0][1] = 63;
    mat[0][2] = 210;
    mat[0][3] = 190;
    mat[0][4] = 0;
    mat[0][5] = 190;

    mat[1][0] = 63;
    mat[1][1] = 0;
    mat[1][2] = 160;
    mat[1][3] = 150;
    mat[1][4] = 95; //be
    mat[1][5] = 0;

    mat[2][0] = 210;
    mat[2][1] = 160;
    mat[2][2] = 0;
    mat[2][3] = 10; //CD
    mat[2][4] = 0;
    mat[2][5] = 0;

    mat[3][0] = 190;
    mat[3][1] = 150; //db
    mat[3][2] = 10;
    mat[3][3] = 0;
    mat[3][4] = 0;
    mat[3][5] = 0;

    mat[4][0] = 0;
    mat[4][1] = 95;
    mat[4][2] = 0;
    mat[4][3] = 0;
    mat[4][4] = 0;
    mat[4][5] = 110; //ef

    mat[5][0] = 190; //fa
    mat[5][1] = 0;
    mat[5][2] = 0;
    mat[5][3] = 0;
    mat[5][4] = 110;
    mat[5][5] = 0;

    //C – D – B – E – F – A
    resultado = mat[2][3] +
                mat[3][1] +
                mat[1][4] +
                mat[4][5] +
                mat[5][0];


    printf("\n Rota percorrida: C-D-B-E-F-A \n");
    printf("\n A distancia percorrida foi de: %d km \n",resultado);

}
