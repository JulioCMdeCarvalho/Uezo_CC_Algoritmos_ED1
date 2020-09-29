#include <stdio.h>
#include <stdlib.h>

/*
Este TAD tem o objetivo de me fazer lembrar
do pouco que ja aprendi na vida a respeito de
programacao

PS: Nao se mate. Nunca desista.

*/

int main()
{

//tipos de dados: int, char, float, double
//tipo vazio: void

/*

tipo - bits - faixa mínima

char - 8 bits - (menos)-128 a 127

int - 16 - menos -32.768 a 32.767

float - 32 - seis digitos de precisao

double - 64 - dez digitos de precisao

void - 0 sem valor
*/

//declaracao: tipo nome1, nome2, ...
//declaracao constante: const tipo nome = value;
//declaracao de um define: #define nome valor
//operadores bit a bit(precedencia) = & e ^

    int m,n,o;
    m = n = 10;

    o = n++;

    //C PRECISA DO CODIGO DE FORMATACAO PARA EXIBIR SEUS RESULTADOS
    printf("%d \n", o);

    printf("%d \n", n);




    //como funciona char em c:
    char letra;

    printf("\n Digite uma letra: \n");
    scanf("%c", &letra);
    printf("\n A letra digitada foi: %c \n", letra);



    //com as bibliotecas conio.h e string.h voce pode pegar a palavra assim:
    printf("Nome: \n");
    fflush(stdin);
    fgets(funcionario1.nome, 40, stdin);
    //isso vai salvar na struct deboa





/*
códigos de formatação de printf

%c caractere
%d ou i inteiro decimal com sinal
%E real em notação científica com E
%e real em notação científica com e
%f real em ponto flutuante
%G o mais curto entre E ou F
%g o mais curto entre e ou f

%o octal
%s cadeia de caracteres
%u inteiro decimal sem sinal
%x hexadecimal (letras minúsculas)
%X hexadecimal(letras maiúsculas)
%p endereço de memória
%% o próprio caractere

*/


/*
código comentário
%c caractere simples
%d ou i inteiro decimal
%e f ou g real em ponto flutuante
%o octal
%s cadeia de caracteres
%x hexadecimal
%p endereço de memória
%u inteiro decimal sem sinal
*/



/*
nome = getchar();
nome : identificador de uma variável do tipo int ou char
*/

    // printf("\n %d", valor); //printa valor na tela
    // o & eh para endereco - lembra de ponteiros.





}
