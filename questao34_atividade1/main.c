#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
34. Ler os dados pessoais de um conjunto de
candidatas de um concurso de beleza e escrever
os nomes daquelas que têm altura maior que 1,70m.
Os dados pessoais são:
número da inscrição, nome completo, altura,
peso, naturalidade e estado. O número de inscrição igual a -1
indica o fim do conjunto de candidatas.
*/


struct candidata{

    char nome[50], naturalidade[50], estado[50];
    int numero_inscricao, peso;
    float altura;
};

int main()
{
    setlocale(LC_ALL,"");

    struct candidata vet_candidatas[50];
    int i=0, cont=0, validacao=0;

    while(validacao != -1){

        printf("\nDigite o nome da candidata: \n");
        fflush(stdin);
        fgets(vet_candidatas[i].nome, 50, stdin);

        printf("\nDigite a naturalidade da candidata: \n");
        fflush(stdin);
        fgets(vet_candidatas[i].naturalidade, 50, stdin);

        printf("\nDigite o estado de origem da candidata: \n");
        fflush(stdin);
        fgets(vet_candidatas[i].estado, 50, stdin);

        printf("\n Numero de Inscricao: \n");
        scanf("%d", &vet_candidatas[i].numero_inscricao);

        printf("\n Peso(kg): \n");
        scanf("%d", &vet_candidatas[i].peso);

        printf("\n Altura: \n");
        scanf("%f", &vet_candidatas[i].altura);

        i++;
        cont++;

        printf("\n--------------------------------------------\n");
        printf("\n Deseja cadastrar mais uma candidata ? (1 para sim | -1 para nao): \n");
        scanf("%d", &validacao);
    }

    printf("\n Nomes das candidatas mais altas do que 1,70: \n");
    for(i=0;i<cont;i++){
        if(vet_candidatas[i].altura > 1.70){
            printf("\n %s \n", vet_candidatas[i].nome);
        }
    }

}
