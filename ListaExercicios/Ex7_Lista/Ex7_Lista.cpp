#include "pch.h"
#include <iostream>
#include <locale.h>

int a, b, verificador;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("Favor, escreva o primeiro número: ");
	scanf_s("%i", &a);
	printf("Favor, escreva o segundo número: ");
	scanf_s("%i", &b);

	verificador = a % b;

	if (verificador == 0) {
		printf("\nO número %i é múltiplo de %i!!!\n\n", a, b);
	}
	else {
		printf("\nO número %i NÃO é múltiplo de %i!!!\n\n", a, b);
	}

	system("pause");
}