#include "pch.h"
#include <iostream>
#include <locale.h>

int mat[3][3], i, j;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Favor, preencha a matriz: Dados [%d][%d]: ", i + 1, j + 1);
			scanf_s("%d", &mat[i][j]);
		}
	}
	system("cls");

	printf("A matriz transposta da matriz informada é: \n\n");
	for (j = 0; j < 3; j++) {
		printf("\n");
		for (i = 0; i < 3; i++) {
			printf(" [%i][%i] = %i", i, j, mat[i][j]);
		}
	}
	printf("\n\n");

	system("pause");
}