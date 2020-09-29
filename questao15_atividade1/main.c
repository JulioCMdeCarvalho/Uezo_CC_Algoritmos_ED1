#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<locale.h>

/*
15. Ler um vetor com 5 caracteres, verificar
e escrever se � ou n�o um pal�ndromo.
Obs.: um pal�ndromo � uma sequ�ncia de caracteres
que � a mesma quando lida de frente para tr�s e
de tr�s para frente. Ex.: ARARA.

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
        printf("\nA palavra %s � pal�ndroma\n", palavra);
    else
        printf("\nA palavra %s n�o � pal�ndroma\n", palavra);

}
