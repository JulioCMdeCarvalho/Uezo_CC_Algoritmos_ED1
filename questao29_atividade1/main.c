#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
29. Ler uma matriz 10 x 5 que se
refere às respostas de 5 questões
de múltipla escolha, referentes
a 10 alunos. Ler também um vetor
de 5 posições contendo o gabarito
das respostas que podem ser a, b,
c ou d.
Comparar as respostas de cada
candidato com o gabarito e
escrever um vetor contendo a
pontuação correspondente.
*/

//6 e 7 trocaram
//aver pq

int main()
{
    char matriz_respostas[10][5];
    char vetor_gabarito[5];
    int vetor_correcao[10]; // ira conter a soma dos pontos que o aluno conquistou
    int i, j;

    //funciona
    //armazena as notas de cada aluno

    printf("\n------------------------------------\n");
    printf("\n Registro das respostas dos alunos: \n");
    printf("\n------------------------------------\n");
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            printf("\nEntre com a resposta do aluno %d: \n", i+1);
            scanf("%c", &matriz_respostas[i][j]); //armazena o valor na matriz
            fflush(stdin); //garante que captura apenas o que o usuario digitou
        }
    }

    //funciona
    //armazena o gabarito
    printf("\n------------------------------------\n");
    printf("\n Registro do gabarito: \n");
    printf("\n------------------------------------\n");
    for(i=0;i<5;i++){
        printf("Gabarito da questao %d:", i+1);
        scanf("%c", &vetor_gabarito[i]);
        fflush(stdin);
    }

    //corrigindo as questoes de cada aluno
    for(i=0;i<10;i++){
        vetor_correcao[i]=0;
        for(j=0;j<5;j++){
            if(matriz_respostas[i][j] == vetor_gabarito[i]){
                vetor_correcao[i]++;
            }
        }
    }

    //Mostrando o resultado na tela
    printf("\n -- Resultado do exame -- \n");
    for(i=0;i<10;i++){
        printf("\n Aluno %d : %d pontos \n", i+1, vetor_correcao[i]);
    }
}
