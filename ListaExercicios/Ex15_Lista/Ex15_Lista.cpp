#include "pch.h"
#include <iostream>
#include <locale.h>
#include <math.h>

int x, n, result;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Favor, informe um número inteiro: ");
	scanf_s("%i", &x);
	printf("Agora, informe um número inteiro não-negativo: ");
	scanf_s("%i", &n);

	if (n > 0) {
		result = pow(x, n);
		printf("\nO resultado de %i elevado a %i é: %i\n\n", x, n, result);
	}
	else {
		printf("\nO segundo número inserido não pode ser negativo!!!\n\n");
	}

	system("pause");
}