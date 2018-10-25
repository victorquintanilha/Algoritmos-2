#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
"e" - &&		verdadeiro somente quando todas condicoes forem verdadeiras
"ou" - ||		basta que uma condicao seja verdadeira para ser verdadeiro
*/
int lernumerointeiro()
{
	int numero;
	printf("Favor digitar um número inteiro: ");
	scanf_s("%i", &numero);
	return numero;
}
int maiorvalor(int x, int y, int z, int w)
{
	int verificador = x;
	if (y > verificador)
	{
		verificador = y;
	}
	if (z > verificador)
	{
		verificador = z;
	}
	if (w > verificador)
	{
		verificador = w;
	}
	return verificador;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int primeirovalor = lernumerointeiro();
	int segundovalor = lernumerointeiro();
	int terceirovalor = lernumerointeiro();
	int quartovalor = lernumerointeiro();
	int a = maiorvalor(primeirovalor, segundovalor, terceirovalor, quartovalor);
	printf("\nO maior número é: %i\n\n", a);
	system("pause");
	return 0;
}