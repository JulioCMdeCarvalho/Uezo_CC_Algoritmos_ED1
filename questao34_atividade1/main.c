#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*
34. Ler os dados pessoais de um conjunto de
candidatas de um concurso de beleza e escrever
os nomes daquelas que têm altura maior que 1,70m.
Os dados pessoais são:
número da inscrição, nome completo, altura,
peso, naturalidade e estado. O número de inscrição igual a -1
indica o fim do conjunto de candidatas.
*/

//terminar depois


struct candidata{

    char nome[50], naturalidade[50], estado[50];
    int numero_inscricao, peso;
    float altura;

};

int main()
{

    struct candidata candidata1[50];
    int i = 0, cont = 0;
    char validacao = 'S';

    while(validacao == 'S'){

        printf("\nDigite o nome da candidata: \n");
        fflush(stdin);
        fgets(candidata1[i].nome, 50, stdin);

        printf("\nDigite a naturalidade da candidata: \n");
        fflush(stdin);
        fgets(candidata1[i].naturalidade, 50, stdin);

        printf("\nDigite o estado de origem da candidata: \n");
        fflush(stdin);
        fgets(candidata1[i].estado, 50, stdin);

        printf("\n Numero de Inscricao: \n");
        scanf("%d", &candidata1[i].numero_inscricao);

        printf("\n Peso: \n");
        scanf("%d", &candidata1[i].peso);

        printf("\n Altura: \n");
        scanf("%f", &candidata1[i].altura);

        i++;
        cont++;

        printf("\n--------------------------------------------\n");

        printf("\n Deseja cadastrar mais uma candidata ? (S para sim | N para nao): \n");

        scanf("%c", &validacao);

    }


    printf("\n Nomes das candidatas mais altas do que 1,70: \n");
    for(i=0;i<cont;i++){
        if(candidata1[i].altura > 1.70){
            printf("\n", candidata1[i].nome, "\n");
        }
    }


}
