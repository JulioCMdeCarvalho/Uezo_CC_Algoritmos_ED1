#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
31. Declarar um registro que armazene
os dados de um funcionário da forma abaixo.
Criar dois exemplos de tal registro e
apresentar na tela.

*/

struct formulario{

    char nome[100], rua[100], complemento[50];
    char bairro[50], cidade[50], sexo[50],dependentes[10];
    char data_nascimento[50], cpf[50];
    int numero_rua;
    int horas_trabalhadas_sem1, horas_trabalhadas_sem2, horas_trabalhadas_sem3;

};

int main()
{

    struct formulario funcionario1;
    struct formulario funcionario2;

    printf("\n Primeiro Funcionario \n");
    printf("\n --------- CADASTRO DE FUNCIONARIO --------- \n");
    printf("Nome: \n");
    fflush(stdin);
    fgets(funcionario1.nome, 100, stdin);

    printf("Rua: \n");
    fflush(stdin);
    fgets(funcionario1.rua, 100, stdin);

    printf("Numero da rua: ");
    scanf("%d", &funcionario1.numero_rua);

    printf("Complemento: \n");
    fflush(stdin);
    fgets(funcionario1.complemento, 50, stdin);

    printf("Bairro: \n");
    fflush(stdin);
    fgets(funcionario1.bairro, 50, stdin);

    printf("Cidade: \n");
    fflush(stdin);
    fgets(funcionario1.cidade, 50, stdin);

    printf("CPF: ");
    fflush(stdin);
    fgets(funcionario1.cpf, 50, stdin);

    printf("Data de Nascimento: ");
    fflush(stdin);
    fgets(funcionario1.data_nascimento, 50, stdin);

    printf("Possui dependentes?(digite sim OU nao): \n");
    fflush(stdin);
    fgets(funcionario1.dependentes, 10, stdin);

    printf("Sexo: \n");
    fflush(stdin);
    fgets(funcionario1.sexo, 50, stdin);

    printf("Digite o numero de horas trabalhadas na primeira semana: \n");
    scanf("%d", &funcionario1.horas_trabalhadas_sem1);
    printf("Digite o numero de horas trabalhadas na segunda semana: \n");
    scanf("%d", &funcionario1.horas_trabalhadas_sem2);
    printf("Digite o numero de horas trabalhadas na terceira semana: \n");
    scanf("%d", &funcionario1.horas_trabalhadas_sem3);


    printf("\n --------- FORMULARIO CADASTRADO --------- \n");
    printf("\nNome do funcionario: %s \n", funcionario1.nome);
    printf("\nRua: %s \n", funcionario1.rua);
    printf("\nNumero: %d \n", funcionario1.numero_rua);
    printf("\nComplemento: %s \n", funcionario1.complemento);
    printf("\nBairro: %s \n", funcionario1.bairro);
    printf("\nCidade: %s \n", funcionario1.cidade);
    printf("\nCPF: %s \n", funcionario1.cpf);
    printf("\nData de Nascimento: %s \n", funcionario1.data_nascimento);
    printf("\nDependentes: %s \n", funcionario1.dependentes);
    printf("\nSexo: %s \n", funcionario1.sexo);
    printf("\nHoras Trabalhadas\n");
    printf("\nPrimeira semana: %d \n", funcionario1.horas_trabalhadas_sem1);
    printf("\nSegunda semana: %d \n", funcionario1.horas_trabalhadas_sem2);
    printf("\nTerceira semana: %d \n", funcionario1.horas_trabalhadas_sem3);

    printf("\n ----------------------------------------------- \n");
    printf("\n Segundo Funcionario \n");
    printf("\n ----------------------------------------------- \n");

    printf("\n --------- CADASTRO DE FUNCIONARIO --------- \n");
    printf("Nome: \n");
    fflush(stdin);
    fgets(funcionario2.nome, 100, stdin);

    printf("Rua: \n");
    fflush(stdin);
    fgets(funcionario2.rua, 100, stdin);

    printf("Numero da rua: ");
    scanf("%d", &funcionario2.numero_rua);

    printf("Complemento: \n");
    fflush(stdin);
    fgets(funcionario2.complemento, 50, stdin);

    printf("Bairro: \n");
    fflush(stdin);
    fgets(funcionario2.bairro, 50, stdin);

    printf("Cidade: \n");
    fflush(stdin);
    fgets(funcionario2.cidade, 50, stdin);

    printf("CPF: ");
    fflush(stdin);
    fgets(funcionario2.cpf, 50, stdin);

    printf("Data de Nascimento: ");
    fflush(stdin);
    fgets(funcionario2.data_nascimento, 50, stdin);

    printf("Possui dependentes?(digite sim OU nao): \n");
    fflush(stdin);
    fgets(funcionario2.dependentes, 10, stdin);

    printf("Sexo: \n");
    fflush(stdin);
    fgets(funcionario2.sexo, 50, stdin);

    printf("Digite o numero de horas trabalhadas na primeira semana: \n");
    scanf("%d", &funcionario2.horas_trabalhadas_sem1);
    printf("Digite o numero de horas trabalhadas na segunda semana: \n");
    scanf("%d", &funcionario2.horas_trabalhadas_sem2);
    printf("Digite o numero de horas trabalhadas na terceira semana: \n");
    scanf("%d", &funcionario2.horas_trabalhadas_sem3);

    printf("\n --------- FORMULARIO CADASTRADO --------- \n");
    printf("\nNome do funcionario: %s \n", funcionario2.nome);
    printf("\nRua: %s \n", funcionario2.rua);
    printf("\nNumero: %d \n", funcionario2.numero_rua);
    printf("\nComplemento: %s \n", funcionario2.complemento);
    printf("\nBairro: %s \n", funcionario2.bairro);
    printf("\nCidade: %s \n", funcionario2.cidade);
    printf("\nCPF: %s \n", funcionario2.cpf);
    printf("\nData de Nascimento: %s \n", funcionario2.data_nascimento);
    printf("\nDependentes: %s \n", funcionario2.dependentes);
    printf("\nSexo: %s", funcionario2.sexo);
    printf("\nHoras Trabalhadas\n");
    printf("\nPrimeira semana: %d \n", funcionario2.horas_trabalhadas_sem1);
    printf("\nSegunda semana: %d \n", funcionario2.horas_trabalhadas_sem2);
    printf("\nTerceira semana: %d \n", funcionario2.horas_trabalhadas_sem3);

}
