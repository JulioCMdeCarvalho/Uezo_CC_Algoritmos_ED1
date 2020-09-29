#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>

/*
45. Escrever uma função que gere um cabeçalho para um relatório.
Essa função deve receber o Nome do autor como parâmetro. O cabeçalho tem a seguinte forma:

============================================
Uezo – Centro Universitário da Zona Oeste
Curso: Ciência da Computação
Disciplina: ED I
Nome: Fulano de Tal
============================================

*/


void cabecalho_de_formulario(char nome[]){

    printf("\n============================================\n");
    printf("\nUezo – Centro Universitário da Zona Oeste \n");
    printf("\nCurso: Ciência da Computação \n");
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
