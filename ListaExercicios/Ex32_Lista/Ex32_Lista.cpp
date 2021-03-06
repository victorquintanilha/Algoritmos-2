#include "pch.h"
#include <iostream>
#include <locale.h>

int numFilhos, cont;
float salario, mediaSalario, mediaFilhos, maiorSalario, quantMenor;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("\n***Obs.: quando terminar, digite um valor negativo para o salário!!!***\n\n");

	while (salario >= 0) {
		printf("Favor, informe seu salário: ");
		scanf_s("%f", &salario);

		if (salario >= 0) {
			printf("Informe agora, quantos filhos tem: ");
			scanf_s("%d", &numFilhos);

			cont++;

			mediaSalario += salario;
			mediaFilhos += numFilhos;
			
			if (salario > maiorSalario) {
				maiorSalario = salario;
			}
			if (salario < 100) {
				quantMenor++;
			}
		}	
	}

	mediaSalario = mediaSalario / cont;
	mediaFilhos = mediaFilhos / cont;
	quantMenor = (quantMenor * 100) / cont;

	printf("\n==================== DADOS POPULAÇÃO ====================\n\n");
	printf("Média de salário: R$ %.2f\n", mediaSalario);
	printf("Média de filhos: %.2f\n", mediaFilhos);
	printf("Maior salário: R$ %.2f\n", maiorSalario);
	printf("Pessoas com salário menor que R$ 100,00: %.2f%%\n\n", quantMenor);
	printf("=========================================================\n\n");

	system("pause");
	return 0;
}