#include "pch.h"
#include <iostream>
#include <locale.h>

float vendCarros, salarioMin = 954, salarioTot;
int quantCarros;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Favor, informe quantos carros foram vendidos por este vendedor: ");
	scanf_s("%d", &quantCarros);
	printf("Agora, informe o valor total em vendas destes carros: ");
	scanf_s("%f", &vendCarros);

	salarioTot = (salarioMin * 2) + (50 * quantCarros) + (vendCarros * 0.05);

	printf("\nO salário total deste vendedor será de: R$ %.2f\n\n", salarioTot);

	system("pause");
	return 0;
}