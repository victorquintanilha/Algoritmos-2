#include "pch.h"
#include <iostream>

int x, n, i, j;

int main()
{
	printf("Favor, informe um numero inteiro: ");
	scanf_s("%d", &n);

	for (x = 1; x <= n; x++) {
		printf("%d", x);
	}

	printf("\n");

	for (i = 1; n > i; i++) {
		x = 0;
		for (j = 0; j < n; j++) {
			if (j < i) {
				printf("x");
			}
			else
				printf("%i", x);
				x = x + 1;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}