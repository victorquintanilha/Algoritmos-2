#include "pch.h"
#include <iostream>
#include <locale.h>

float n1, n2, n3, medA, medP, medH;
int tipo;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Favor, informe a primeira nota: ");
	scanf_s("%f", &n1);
	printf("Favor, informe a segunda nota: ");
	scanf_s("%f", &n2);
	printf("Favor, informe a terceira nota: ");
	scanf_s("%f", &n3);

	printf("\n============== TIPOS DE MÉDIA ==============\n");
	printf("1 - Aritmética\n");
	printf("2 - Ponderada\n");
	printf("3 - Harmônica\n");
	printf("============================================\n\n");

	printf("Favor, escreva o código do tipo de média que deseja: ");
	scanf_s("%i", &tipo);

	switch (tipo)
	{
	case 1:
		medA = (n1 + n2 + n3) / 3;
		printf("\nA média aritmética é: %.2f\n\n", medA);
		break;

	case 2:
		medP = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10;
		printf("\nA média ponderada é: %.2f\n\n", medP);
		break;
	
	case 3:
		medH = 3 / (1 / n1 + 1 / n2 + 1 / n3);
		printf("\nA média harmônica é: %.2f\n\n", medH);
		break;
	
	default:
		printf("\nCódigo inválido!!!\n\n");
		break;
	}

	system("pause");
}