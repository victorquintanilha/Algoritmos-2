#include "pch.h"
#include <iostream>
#include <locale.h>

int idade, dias;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Favor, informe sua idade: ");
	scanf_s("%d", &idade);

	dias = idade * (30 * 12);

	printf("\nSua idade em dias é: %i\n\n", dias);

	system("pause");
	return 0;
}