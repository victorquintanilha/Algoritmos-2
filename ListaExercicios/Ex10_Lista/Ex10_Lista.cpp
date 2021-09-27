#include "pch.h"
#include <iostream>
#include <locale.h>

int cod, quant;
float valor;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("============== PRODUTOS ==============\n\n");
	printf(" 1001 - R$ 5,32\n");
	printf(" 1324 - R$ 6,45\n");
	printf(" 6548 - R$ 2,37\n");
	printf(" 0987 - R$ 5,32\n");
	printf(" 7623 - R$ 6,45\n");
	printf("\n======================================\n\n");
	
	printf("Favor, informe o código do produto comprado: ");
	scanf_s("%04d", &cod);
	printf("Agora, informe a quantidade comprada: ");
	scanf_s("%i", &quant);

	switch (cod)
	{
		case 1001:
			valor = quant * 5.32;
			printf("\nO preço total é: R$ %.2f\n\n", valor);
			break;

		case 1324:
			valor = quant * 6.42;
			printf("\nO preço total é: R$ %.2f\n\n", valor);
			break;

		case 6548:
			valor = quant * 2.37;
			printf("\nO preço total é: R$ %.2f\n\n", valor);
			break;

		case 987:
			valor = quant * 5.32;
			printf("\nO preço total é: R$ %.2f\n\n", valor);
			break;

		case 7623:
			valor = quant * 6.45;
			printf("\nO preço total é: R$ %.2f\n\n", valor);
			break;

		default:
			printf("\nCódigo inválido!!!\n\n");
			break;
	}
		
	system("pause");
}