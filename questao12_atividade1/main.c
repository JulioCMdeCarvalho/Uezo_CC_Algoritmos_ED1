#include <stdio.h>
#include <stdlib.h>

/*
12. Ler dois vetores de 20 posições e
escrever outro vetor contendo,
nas posições pares os valores do
primeiro e nas posições ímpares
os valores do segundo.
*/

int main()
{

    int vetor1[20], vetor2[20], vetor3[20], i;

    //entrada vetor1
    for(i=0;i<20;i++){
        printf("Digite um valor inteiro a ser armazenado no primeiro vetor: ");
        scanf("%d", &vetor1[i]);
    }

    //entrada vetor2
    for(i=0;i<20;i++){
        printf("Digite um valor inteiro a ser armazenado no segundo vetor: ");
        scanf("%d", &vetor2[i]);
    }

    //troca_dos_valores

    for(i=0;i<20;i++){
       if(i%2 == 0){
            vetor3[i] = vetor1[i];
       }
       if(i%2 != 0){
            vetor3[i] = vetor2[i];
       }
    }

    //saida
    for(i=0;i<20;i++){
        printf("Valor da nota %d: %d \n", i, vetor3[i]);
    }

}
