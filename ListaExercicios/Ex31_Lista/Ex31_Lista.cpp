#include "pch.h"
#include <iostream>
#include <locale.h>

int a, cont, i;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 5; i++) {
		printf("Favor, escreva um número: ");
		scanf_s("%d", &a);
		if (a < 0) {
			cont++;
		}
	}

	system("cls");
	printf("Dos números informados, %d são negativos!!!\n\n", cont);

	system("pause");
	return 0;
}