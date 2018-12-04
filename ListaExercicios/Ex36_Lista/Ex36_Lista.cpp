#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n[20], i, result[20];

int main()
{
	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 20; i++) {
		printf("Informe o valor %d: ", i + 1);
		scanf_s("%d", &n[i]);

		result[i] = n[i] * i;
	}

	printf("\n");

	for (i = 0; i < 20; i++) {
		printf("%d x %d = %d\n", i, n[i], result[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}