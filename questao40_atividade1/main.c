#include <stdio.h>
#include <stdlib.h>

/*
40. Criar uma fun��o para calcular o
fatorial de um n�mero inteiro.
*/

int fatorial(int n) {
    int resultado = 1;
    while (n > 1) resultado *= n--;
    return resultado;
}

int main(void) {
    int n;
    printf("\n Digite o numero a ser fatorado: \n");
    scanf("%d", &n);
    printf("%.d", fatorial(n));
}
