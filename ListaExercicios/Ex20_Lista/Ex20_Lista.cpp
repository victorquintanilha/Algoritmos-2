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
			if (mat[i][j] < 0) {
				mat[i][j] = mat[i][j] * -1;
			}
		}
	}
	system("cls");

	for (i = 0; i < 3; i++) {
		printf("\n");
		for (j = 0; j < 3; j++) {
			printf(" [%i][%i] = %i ", i, j, mat[i][j]);
		}
	}
	printf("\n\n");

	system("pause");
}