#include<stdlib.h>
#include<string.h>

int main(void){

	char sexo[10], corOlhos[10], corCabelos[10];
	int idade, somaIdade, cont=0, cont2=0, cont3=0;
	float mediaIdade, porc1, porc2;

	printf("Sexo: ");
	scanf("%s", sexo);

	printf("Cor do olhos: ");
	scanf("%s", corOlhos);

	printf("Cor do cabelo: ");
	scanf("%s", corCabelos);

	printf("Idade: ");
	scanf("%*c%d", &idade);

	while(idade!=-1){

		printf("\n");

		somaIdade = somaIdade + idade;

		cont++;

		if(strcmp(sexo, "feminino") == 0 && idade > 18 && idade < 35 && strcmp(corOlhos, "verde") == 0 && strcmp(corCabelos , "louro") == 0){
			cont2++;
		}

		if(strcmp(sexo, "masculino") == 0 && strcmp(corOlhos, "verde") == 0 && strcmp(corCabelos , "preto") ==0 ){
			cont3++;
		}

		printf("Sexo: ");
		scanf("%s", sexo);


		printf("Cor do olhos: ");
		scanf("%s", corOlhos);

		printf("Cor do cabelo: ");
		scanf("%s", corCabelos);

		printf("Idade: ");
		scanf("%d", &idade);

	}

		mediaIdade = somaIdade/cont;
		porc1 = 100 * cont2/cont;
		porc2 = 100 * cont3/cont;

		printf("Media de idade: %.2f\n", mediaIdade);
		printf("Porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos (inclusive) e que tenham olhos verdes e cabelos louros: %.2f\n", porc1);
		printf("Porcentagem de indivíduos do sexo masculino cujos olhos são verdes e os cabelos são pretos: %.2f\n", porc2);



return 0;
}
