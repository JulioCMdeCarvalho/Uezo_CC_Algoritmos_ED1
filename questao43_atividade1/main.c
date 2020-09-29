#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
43. O número 3025 possui a seguinte característica:

30 + 25 = 55
55^2 = 3025

Escrever uma função para determinar se
um número de 4 algarismos apresenta
essa característica.

*/

void calculo_caracteristica_dos_4_algarismos(int num){
    int n1, n2, n3, n4, aux, primeira_metade, segunda_metade, soma, calculo;

    n1 = num / 1000;
    aux = num % 1000;
    n2 = aux / 100;
    aux = aux % 100;
    n3 = aux / 10;
    n4 = aux % 10;

    primeira_metade = (n1 * 10 ) + n2;
    segunda_metade = (n3 * 10 ) + n4;
    soma = primeira_metade + segunda_metade;
    calculo = pow(soma,2);

    if (calculo == num){
        printf("\nO NUMERO POSSUI TAL CARACTERISTICA\n");
    }else {
        printf("\nO NUMERO NAO POSSUI TAL CARACTERISTICA\n");
    }

    return 0;
}


int main()
{
    int num;
    printf("\n Digite o numero a ser analisado: \n");
    scanf("%d",&num);
    calculo_caracteristica_dos_4_algarismos(num);
}
