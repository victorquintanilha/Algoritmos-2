#include "pch.h"
#include <iostream>
#include <locale.h>
#include <math.h>

#define pi 3.14159;

float area, raio;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Favor, informe o raio da circunferência: ");
	scanf_s("%f", &raio);

	raio = pow(raio, 2);
	area = raio * pi;
	
	printf("\nA área da circunferência é: %f\n\n", area);

	system("pause");
}