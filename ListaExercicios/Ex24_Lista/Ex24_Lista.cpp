#include "pch.h"
#include <iostream>

int a, b, c;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Informe A: ");
	scanf_s("%d", &a);
	printf("Informe B: ");
	scanf_s("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("\nResultado da troca:\n\n");
	printf("A = %d\n", a);
	printf("B = %d\n\n", b);
	
	system("pause");
	return 0;
}