#include "pch.h"
#include <iostream>
#include <locale.h>

int a, b, c;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Favor, informe o lado A do triângulo: ");
	scanf_s("%d", &a);
	printf("Favor, informe o lado B do triângulo: ");
	scanf_s("%d", &b);
	printf("Favor, informe o lado C do triângulo: ");
	scanf_s("%d", &c);

	if (a < b + c && b < a + c && c < a + b) {
		if (a == b && b == c && c == a) {
			printf("\nEste é um triângulo equilátero!\n\n");
		}
		if (((a == b) && (b != c)) || ((b == c) && (a != c)) || ((a == c) && (b != c))) {
			printf("\nEste é um triângulo isóscele!\n\n");
		}
		if (a != b && b != c && c != a) {
			printf("\nEste é um triângulo escaleno!\n\n");
		}
	}
	else {
		printf("\nOs dados informados não podem ser os comprimentos dos lados de um triângulo!\n\n");
	}

	system("pause");
	return 0;
}