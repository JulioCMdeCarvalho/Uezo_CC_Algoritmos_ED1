# Uezo_CC_Algoritmos_ED1
Exercícios em C e suas soluções 

UEZO - Centro Universitário Estadual da Zona Oeste
Ciência da Computação
Tec. em Análise e Desenvolvimento de Sistemas
INF5321 - CCB1044: Estruturas de Dados I
Profa. Dilza Swarcman
LISTA DE EXERCÍCIOS
Revisão de Estruturas e Modularização em C
Estruturas Homogêneas e Heterogêneas
1. Por que os vetores e matrizes disponíveis em C são considerados Estruturas de Dados?
2. Quais as vantagens desses tipos de estruturas?
3. Quais as estruturas heterogêneas disponíveis em C?
4. Faça um desenho representativo de como se apresenta na memória a matriz abaixo. Indique os índices de acesso a cada variável.
int mat[2][3][2];
5. Faça um desenho representativo de como se apresenta na memória o vetor abaixo. Indique identificadores e índices de acesso a cada variável.
typedef struct _ponto
{
int x;
int y;
}Pt;
Pt vet[2];
Para cada exercício até o final desta seção, escreva um algoritmo em C e verifique o funcionamento no Code Blocks. Para verificar o funcionamento, utilize o Debugger com breakpoints e acompanhe os valores das variáveis na janela Watches.
Obs: “Ler” significa ler da entrada do teclado ou de um arquivo TXT e “Escrever” significa saída na tela.
6. Ler um vetor de 12 posições e dois valores X e Y quaisquer, correspondentes a duas posições no vetor. Em seguida, escrever a soma dos valores encontrados nas respectivas posições X e Y.
7. Declarar um vetor de 10 posições, preenchê-lo com os 10 primeiros números ímpares e escrevê-lo.
8. Ler um vetor de 16 posições, trocar os 8 primeiros valores pelos 8 últimos, e vice-versa, e escrever o vetor obtido.
9. Ler um vetor de 20 posições e um valor X qualquer. Em seguida, buscar pelo valor X no vetor lido e, se for encontrado, informar a posição. Caso contrário, informar que o valor não foi encontrado.
10. Ler um vetor de 40 posições, contar e escrever a quantidade de valores pares existentes no vetor.
11. Ler um vetor de 40 posições, substituir todos os valores negativos por 0 e escrever o vetor resultante.
12. Ler dois vetores de 20 posições e escrever outro vetor contendo, nas posições pares os valores do primeiro e nas posições ímpares os valores do segundo.
13. Ler um vetor de 40 posições e acumular o valor do primeiro elemento no segundo, do segundo no terceiro, e assim por diante. Ao final, escrever o vetor obtido.
14. Ler um vetor contendo letras de uma frase, inclusive os espaços em branco, retirar os espaços em branco do vetor e depois escrevê-lo.
15. Ler um vetor com 5 caracteres, verificar e escrever se é ou não um palíndromo.
Obs.: um palíndromo é uma sequência de caracteres que é a mesma quando lida de frente para trás e de trás para frente. Ex.: ARARA.
16. Ler uma matriz 10 x 10 e escrever a localização (linha e a coluna) do maior valor.
17. Declarar uma matriz 5 x 5, preencher a diagonal principal com o valor 1 e com 0 os demais elementos e escrever a matriz obtida.
18. Ler duas matrizes 4 x 4 e escrever uma terceira com os maiores elementos entre as primeiras.
19. Ler uma matriz 6 x 6, contar e escrever quantos valores maiores que 10 ela tem.
20. Ler uma matriz 20 x 20 e um valor X. Em seguida, buscar pelo valor X na matriz e, se for encontrado, informar a posição. Caso contrário, informar que o valor não foi encontrado.
21. Ler uma matriz 4 x 4, trocar os valores da 1ª linha pelos da 4ª coluna, e vice-versa, e escrever a matriz obtida.
22. Ler uma matriz 8 x 8, transformá-la numa matriz triangular inferior, ou seja, atribuir 0 a todos os elementos acima da diagonal principal, e escrever a matriz obtida.
23. Ler uma matriz 8 x 8, identificar e escrever o maior elemento da diagonal principal e a soma dos elementos da diagonal secundária.
24. Ler uma matriz 6 x 6 e atribuir o valor 0 aos valores negativos encontrados fora das diagonais principal e secundária.
25. Ler duas matrizes 20 x 20 e escrever os valores da primeira que ocorrem em qualquer posição da segunda.
26. Ler as idades e as alturas de 50 alunos. Em seguida, calcular e escrever quantos alunos com mais de 13 anos têm altura inferior à média das alturas de todos os alunos.
27. Declarar uma matriz 7 x 7, preencher com os valores correspondentes a um triângulo de coeficientes binomiais de Pascal de ordem 7 e escrever o resultado.
28. Ler uma matriz 3 x 3 de valores inteiros e positivos, calcular e escrever se ela representa ou não um quadrado mágico.
29. Ler uma matriz 10 x 5 que se refere às respostas de 5 questões de múltipla escolha, referentes a 10 alunos. Ler também um vetor de 5 posições contendo o gabarito das respostas que podem ser a, b, c ou d. Comparar as respostas de cada candidato com o gabarito e escrever um vetor contendo a pontuação correspondente.
30. As distâncias entre 6 cidades são dadas pela matriz a seguir:
A
B
C
D
E
F
A
63
210
190
190
B
63
160
150
95
C
210
160
10
D
190
150
10
E
95
110
F
190
110
Calcular e escrever a distância percorrida por alguém que sai da cidade C e vai para a cidade A pela rota: C – D – B – E – F – A.
31. Declarar um registro que armazene os dados de um funcionário da forma abaixo. Criar dois exemplos de tal registro e apresentar na tela.
FUNCIONARIO
NOME
END
RUA
NUM
COMP
BAIRRO
CIDADE
CPF
DTNASC
TEMDEPEND
SEXO
HORASTRAB
SEMANA1
SEMANA2
SEMANA3
32. Declarar um registro CADASTRO com os seguintes campos NOME, ENDERECO, SALARIO, IDENTIDADE, ESTADO CIVIL, TELEFONE, IDADE
e SEXO. O campo ENDERECO deve ser composto por RUA, BAIRRO, CIDADE, ESTADO, CEP. Criar dois exemplos de tal registro e apresentar na tela.
33. Declarar um vetor de registros com a representação abaixo. Ler dois registros, armazenar no vetor e apresentar na tela.
VOOS AVIAO
01
→
NUM_VOO
TIPO
PRECO
NUM_LUGARES
02
...
30
34. Ler os dados pessoais de um conjunto de candidatas de um concurso de beleza e escrever os nomes daquelas que têm altura maior que 1,70m.
Os dados pessoais são: número da inscrição, nome completo, altura, peso, naturalidade e estado. O número de inscrição igual a -1 indica o fim do conjunto de candidatas.
35. Ler os dados de 10 produtos de uma mercearia e escrever os nomes e os preços daqueles cujas quantidades em estoque estão abaixo do valor mínimo. Os dados dos produtos são: código, descrição, quantidade em estoque, quantidade mínima e preço.
36. Ler os dados referentes a 100 voos de um aeroporto. Em seguida, ler um valor de origem e escrever todos os voos com a origem informada. Escrever também todos os voos que têm horário de partida pela manhã. Os dados dos voos são: código, horário de partida, quantidade de passageiros, valor da passagem, origem e destino.
37. Ler os dados referentes a N modelos de carros e o preço do combustível. Em seguida, calcular e escrever o nome do modelo mais econômico, o consumo de combustível para percorrer 1000 Km e o custo. Os dados dos modelos são: nome, marca e consumo (Km/l).
38. Para evitar erros de digitação de sequências de números importantes, como matrícula, CPF e conta bancária, geralmente é adicionado um dígito verificador ao número. Ler um conjunto de registros contendo, cada um, dois números de seis dígitos, seguidos de seus respectivos dígitos verificadores, e escrever, para cada número lido, se o dígito verificador está correto ou não. Um registro com o primeiro número igual a 0 indica o fim do conjunto.
39. O depósito de uma empresa do ramo de construção civil é uma área retangular dividida em vinte lotes iguais, que estão dispostos da seguinte maneira:
L01
L02
L03
L04
L05
L06
L07
L08
L09
L10
L11
L12
L13
L14
L15
L16
L17
L18
L19
L20
Cada lote pode armazenar cimento, areia, tubos, blocos, madeira, cal ou saibro. Em cada lote está anotada a quantidade de itens do produto armazenado. Ler o conteúdo de cada lote. Calcular e escrever quantos lotess de cada item existem no depósito. Um lote armazena apenas um tipo de produto, mas o mesmo produto pode estar armazenado em mais de um lote.
MODULARIZAÇÃO
Para cada exercício a seguir, escreva, em C, a função pedida e um algoritmo para testá-la, verificando a execução no Code Blocks. Para verificar o funcionamento, utilize o Debugger com breakpoints e acompanhe os valores das variáveis na janela Watches.
40. Criar uma função para calcular o fatorial de um número inteiro.
41. Criar uma função que calcule e retorne o número de arranjos de n elementos p a p. A fórmula do arranjo é a seguinte:
𝐴𝑝𝑛=𝑛!(𝑛−𝑝)!
Caso não seja possível calcular tal arranjo, a função deve retornar –1.
42. Escrever uma função que retorne 1 se um número passado por parâmetro for primo e 0, caso contrário.
43. O número 3025 possui a seguinte característica:
30
552
+
25
=
=
55
3025
Escrever uma função para determinar se um número de 4 algarismos apresenta essa característica.
44. Um número é dito ser capicua quando lido da esquerda para a direita é o mesmo que quando lido da direita para a esquerda. O ano 2002, por exemplo, é capicua. Escrever uma função para verificar se um número possui essa característica. Caso o número seja capicua, a função deve retornar 1, caso contrário deve retornar 0.
45. Escrever uma função que gere um cabeçalho para um relatório. Essa função deve receber o Nome do autor como parâmetro. O cabeçalho tem a seguinte forma:
============================================
Uezo – Centro Universitário da Zona Oeste
Curso: Ciência da Computação
Disciplina: ED I
Nome: Fulano de Tal
============================================
46. Escrever uma função que receba um número arábico inteiro e retorne o
número em romano. Por exemplo, para 5 o retorno deve ser “V”. A função
deve ser capaz de gerar o número romano para os 50 primeiros inteiros. A
função deve retornar um código de erro caso um número fora dessa faixa
seja recebido.
47. Escrever uma função que calcule o cosseno de um ângulo entre 0 e  / 2
radianos utilizando os primeiros 30 termos da série:
cosseno(x) = 1− + − + −
2 4 6 8
2 4 6 8 x x x x
! ! ! !
...
Escrever um algoritmo que utilize essa função para mostrar na tela o
cosseno dos ângulos de 0 a 1, com incrementos de 0,1.
48. Escreva uma função que receba a idade de um nadador por parâmetro e
retorne a categoria desse nadador de acordo com a tabela a seguir:
idade categoria
5 a 7 anos infantil A
8 a 10 anos infantil B
11 a 13 anos juvenil A
14 a 17 anos juvenil B
maiores de 18 anos (inclusive) adulto
49. Escreva uma função que receba por parâmetro um valor inteiro e positivo N
e retorne o valor de S, que é dado por:
𝑆 = 1 + 1/1! + 1/2! + ⋯ + 1/𝑁!
