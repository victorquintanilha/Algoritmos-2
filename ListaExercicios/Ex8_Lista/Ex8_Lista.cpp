#include "pch.h"
#include <iostream>
#include <locale.h>

int idade;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("Favor, informe a idade do nadador: ");
	scanf_s("%i", &idade);
	if (idade >= 5 && idade <= 7) {
		printf("\nEste nadador se enquadra na categoria 'Infantil A'\n\n");
	}
	if (idade >= 8 && idade <= 10) {
		printf("\nEste nadador se enquadra na categoria 'Infantil B'\n\n");
	}
	if (idade >= 11 && idade <= 13) {
		printf("\nEste nadador se enquadra na categoria 'Juvenil A'\n\n");
	}
	if (idade >= 14 && idade <= 17) {
		printf("\nEste nadador se enquadra na categoria 'Juvenil B'\n\n");
	}
	if (idade >= 18) {
		printf("\nEste nadador se enquadra na categoria 'Adulto'\n\n");
	}
	if (idade < 5) {
		printf("\nA idade mínima é de 5 anos!!!\n\n");
	}

	system("pause");
}