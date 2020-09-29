#include <stdio.h>
#include <stdlib.h>

/*
18 - Ler duas matrizes 4 x 4
e escrever uma terceira com os
maiores elementos entre as primeiras.
*/

int main()
{

    int mat1[4][4], mat2[4][4], mat3[4][4];
    int i,j;

    //matriz1
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
                printf("Digite o valor a ser armazenado na primeira matriz: ");
                scanf("%d", &mat1[i][j]);
        }
    }

    //matriz2
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor a ser armazenado na segunda matriz: ");
            scanf("%d", &mat2[i][j]);
        }
    }

    //matriz3 com os maiores elementos das 2 anteriores
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (mat1[i][j] >= mat2[i][j]){
                mat3[i][j] = mat1[i][j];
            }else{
                mat3[i][j] = mat2[i][j];
            }
        }
    }

    printf("\n Terceira Matriz: \n");

    //escrevendo a terceira matriz
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf ("\nElemento[%d][%d] = %d\n",i,j,mat3[i][j]);
        }
    }

}
