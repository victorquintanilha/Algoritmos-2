#include "pch.h"
#include <iostream>
#include <locale.h>

int i, n, soma;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Favor, informe um número inteiro: ");
	scanf_s("%d", &n);

	for (i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			soma = soma + i;
		}
	}

	printf("\nA soma de todos os números pares é: %d\n\n", soma);

	system("pause");
}