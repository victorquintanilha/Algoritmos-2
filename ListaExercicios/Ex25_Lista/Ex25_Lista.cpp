#include "pch.h"
#include <iostream>
#include <locale.h>

float bruto, liquido;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Favor, informe seu salário bruto: ");
	scanf_s("%f", &bruto);

	liquido = (bruto * 0.90) * 0.95;

	printf("\n\nSalário líquido = %.2f\n\n", liquido);

	system("pause");
	return 0;
}