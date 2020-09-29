#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>

/*
33. Declarar um vetor de registros
com a representação abaixo.
Ler dois registros,
armazenar no vetor e apresentar na tela.
*/

struct aviao{

    int num_voo, num_lugares;
    float preco;
    char tipo[50];
};


int main()
{
    struct aviao voos[30];
    int i;

    printf("\n Registro de voos \n");


    for(i=0;i<2;i++){
        printf("\n Numero do voo: \n");
        scanf("%d", &voos[i]);

        printf("\n Tipo de Aviao: \n");
        fflush(stdin);
        fgets(voos[i].tipo, 50, stdin);

        printf("\n Valor numerico da passagem em reais: \n");
        scanf("%f", &voos[i].preco);

        printf("\n Quantidade de assentos: \n");
        scanf("%d", &voos[i].num_lugares);

    }

    printf("\n------------------------------------\n");
    printf("\n Lista de voos armazenados \n");
    printf("\n------------------------------------\n");

    for(i=0;i<2;i++){

        printf("\n Voo numero %d : \n", i);
        printf("\n Numero do voo: %d \n", voos[i].num_voo);
        printf("\n Tipo: %s \n", voos[i].tipo);
        printf("\n Preco: %.2f \n", voos[i].preco);
        printf("\n Numero de lugares: %d \n", voos[i].num_lugares);

    }


}
