#include <stdio.h>
#include <stdlib.h>

/*
22. Ler uma matriz 8 x 8, transformá-la
numa matriz triangular inferior,
ou seja, atribuir 0 a todos os elementos
acima da diagonal principal,
e escrever a matriz obtida.
*/


int main()
{

    int matriz1[8][8];
    int i,j;

    //entrada correta de dados
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("Digite o valor a ser armazenado na matriz: ");
            scanf("%d", &matriz1[i][j]);
        }
    }

    //tornando a matriz inferior
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(i<j){
                matriz1[i][j] = 0;
            }
        }
    }

    printf("Matriz Resultado: \n");

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("\n Posicao da matriz [%d][%d]: %d\n", i, j, matriz1[i][j]);
        }
    }


}
