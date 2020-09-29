#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<locale.h>

/*
15. Ler um vetor com 5 caracteres, verificar
e escrever se é ou não um palíndromo.
Obs.: um palíndromo é uma sequência de caracteres
que é a mesma quando lida de frente para trás e
de trás para frente. Ex.: ARARA.

//funciona

*/

int main()
{
    char palavra[5], inversa[5];
    int cod_verificacao, i, j, aux;

    setlocale(LC_ALL, "");

    printf("\nDigite uma palavra de 5 letras: ");
    gets(palavra);

    j=5;
    for(i=0;i<5;i++){
        j--;
        inversa[j] = palavra[i];
    }

    aux=5;
    for(i=0;i<5;i++){
        aux--;
        if(inversa[aux] == palavra[i])
            cod_verificacao += 1;

    }


    if (cod_verificacao == 5)
        printf("\nA palavra %s é palíndroma\n", palavra);
    else
        printf("\nA palavra %s não é palíndroma\n", palavra);

}
