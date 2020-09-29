#include <stdio.h>
#include <stdlib.h>

/*
9. Ler um vetor de 20 posições
e um valor X qualquer.
Em seguida, buscar pelo valor X
no vetor lido e,
se for encontrado, informar a posição.
Caso contrário, informar que o valor não foi
encontrado.
*/

int main()
{
    int vet[20], valor, found, position, i;

    for(i=0;i<20;i++){
        printf("Entre com o valor inteiro a ser armazenado no vetor: \n");
        scanf("%d", &vet[i]);
    }

    printf("Entre com o valor que esta procurando. \n");
    printf("O valor deve ser um numero inteiro: \n");
    scanf("%d", &valor);

    // printf("\n %d", valor); //printa valor na tela
    // o & eh para endereco - lembra de ponteiros.

    for (int i = 0; i<20; i++)
    {
        //interacao 20 vezes
        if (vet[i] == valor){
            found = 1;
            position = i;
        }

    }

    if (found == 0){
        printf("Numero nao encontrado. \n");
    }
    else{
        printf("Numero encontrado na posicao: \n %d", position);
    }


}

