#include "pch.h"
#include <iostream>
#include <locale.h>

int mat[3][3], i, j, op, multip;

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

	printf("Informe o que deseja multiplicar (1 = Linha e 2 = Coluna): ");
	scanf_s("%d", &op);
	printf("Informe também, qual número será o multiplicador: ");
	scanf_s("%d", &multip);

	switch (op)
	{
	case 1:
		for (j = 0; j < 3; j++) {
			mat[i][j] = mat[i][j] * multip;
		}

		for (i = 0; i < 3; i++) {
			printf("\n");
			for (j = 0; j < 3; j++) {
				printf(" [%i][%i] = %i", i, j, mat[i][j]);
			}
		}
		printf("\n\n");
		break;
	case 2:
		for (i = 0; i < 3; i++) {
			mat[i][j] = mat[i][j] * multip;
		}

		for (i = 0; i < 3; i++) {
			printf("\n");
			for (j = 0; j < 3; j++) {
				printf(" [%i][%i] = %i ", i, j, mat[i][j]);
			}
		}
		printf("\n\n");
		break;
	}

	system("pause");
}