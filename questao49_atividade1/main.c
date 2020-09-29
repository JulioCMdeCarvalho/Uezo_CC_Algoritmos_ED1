#include <stdio.h>
#include <stdlib.h>

/*
49. Escreva uma função que receba por parâmetro
um valor inteiro e positivo N e retorne o valor de S,
 que é dado por:

𝑆 = 1 + 1/1! + 1/2! + ⋯ + 1/𝑁!
//A divisao eh inteira.
//Apenas a parte inteira dos resultados eh
//considerada

*/

int fatorial(int num) {
    int resultado = 1;
    while (num > 1) resultado *= num--;
    return resultado;
}

int funcao_resposta(int N){
    int S, aux, aux2;
    for(aux=1;aux<=N;aux++){
        aux2 = fatorial(aux);
        S = S + aux/aux2; //errado aver pq
    }
    S = S + 1;
    return S;
}

int main()
{
    int N;
    printf("\n Digite o numero: \n");
    scanf("%d", &N);
    printf("\n Resposta: %d \n", funcao_resposta(N));

}
