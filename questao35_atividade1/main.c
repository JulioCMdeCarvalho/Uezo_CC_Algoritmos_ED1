#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
35. Ler os dados de 10 produtos de uma mercearia
e escrever os nomes e os preços daqueles cujas
quantidades em estoque estão abaixo do valor mínimo.
Os dados dos produtos são:
código,
descrição,
quantidade em estoque,
quantidade mínima
e preço.

*/

struct produto{
    int codigo, qtd_estoque,qtd_minima;
    char descricao[50];
    float preco;
};

int main()
{
    setlocale(LC_ALL,"");

    struct produto produto1[10];
    int i;

    for(i=0;i<10;i++){
        printf("\n--------------------------------\n");
        printf("\n Digite o codigo do produto: \n");
        scanf("%d", &produto1[i].codigo);
        printf("\n Digite a descricao do produto: \n");
        fflush(stdin);
        fgets(produto1[i].descricao, 50, stdin);
        printf("\n Digite a quantidade em estoque: \n");
        scanf("%d", &produto1[i].qtd_estoque);
        printf("\n Digite a quantidade minima: \n");
        scanf("%d", &produto1[i].qtd_minima);
        printf("\n Preco em Reais: \n");
        scanf("%f", &produto1[i].preco);
        printf("\n--------------------------------\n");
    }

    printf("\n Produtos cujas quantidades em estoque estão abaixo do valor mínimo e seus respectivos precos: \n");
    for(i=0;i<10;i++){
        if((produto1[i].qtd_estoque) < (produto1[i].qtd_minima)){
            printf("\n Descricao: %s \n", produto1[i].descricao);
            printf("\n Preco: %.2f \n", produto1[i].preco);
        }
    }
}
