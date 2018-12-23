#include "pch.h"
#include <iostream>
#include <locale.h>

void printx(int px)
{
	int i;
	for (i = 0; i < px; i++)
	{
		printf("X");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i = 0, n, c = 0;
	printf("Informe um número inteiro de 2 a 9: ");
	scanf_s("%i", &n);
	printf("\n");
	for (i = 0; i < n; i++) {
		c = (c * 10) + (i + 1);
	}

	printf("%i\n", c);

	for (i = n; i > 1; i--) {
		c = (c - i) / 10;
		printx((n + 1) - i);
		printf("%i\n", c);
	}
	printf("\n");

	system("pause");
	return 0;
}