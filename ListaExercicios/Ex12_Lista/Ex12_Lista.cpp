#include "pch.h"
#include <iostream>
#include <locale.h>

float area, base, altura;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Favor, informe a base do triângulo: ");
	scanf_s("%f", &base);
	printf("Agora, informe a altura do triângulo: ");
	scanf_s("%f", &altura);

	area = (base * altura) / 2;

	printf("\nA área do triângulo é: %.2f\n\n", area);
	
	system("pause");
}