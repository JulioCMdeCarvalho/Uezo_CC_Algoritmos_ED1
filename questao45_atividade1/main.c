#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>

/*
45. Escrever uma fun��o que gere um cabe�alho para um relat�rio.
Essa fun��o deve receber o Nome do autor como par�metro. O cabe�alho tem a seguinte forma:

============================================
Uezo � Centro Universit�rio da Zona Oeste
Curso: Ci�ncia da Computa��o
Disciplina: ED I
Nome: Fulano de Tal
============================================

*/


void cabecalho_de_formulario(char nome[]){

    printf("\n============================================\n");
    printf("\nUezo � Centro Universit�rio da Zona Oeste \n");
    printf("\nCurso: Ci�ncia da Computa��o \n");
    printf("\nDisciplina: ED I \n");
    printf("\nNome: %s \n", nome);
    printf("\n============================================\n");

    return 0;
}

int main()
{
    setlocale(LC_ALL,"");
    char nome[50];
    printf("\n Entre com o nome do autor: \n");
    gets(nome);
    cabecalho_de_formulario(nome);
}
