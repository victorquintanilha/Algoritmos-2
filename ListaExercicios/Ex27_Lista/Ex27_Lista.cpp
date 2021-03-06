#include "pch.h"
#include <iostream>
#include <locale.h>

int quant1, quant10, quant100, totalNotas;
float valorCompra, valorPagamento, valorTroco;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("Favor, informe o valor da compra: ");
	scanf_s("%f", &valorCompra);
	printf("Favor, informe o valor do pagamento: ");
	scanf_s("%f", &valorPagamento);
	
	valorTroco = valorPagamento - valorCompra;
	quant100 = valorTroco / 100;
	quant10 = (valorTroco - (quant100 * 100)) / 10;
	quant1 = valorTroco - (quant100 * 100) - (quant10 * 10);
	totalNotas = quant100 + quant10 + quant1;

	printf("\nSerá necessário no mínimo %d notas para o troco\n", totalNotas);
	printf("O valor da compra é %.2f\n", valorCompra);
	printf("O valor do troco é %.2f\n", valorTroco);
	printf("Será necessário %d nota(s) de 100, %d nota(s) de 10, %d nota(s) de 1\n\n", quant100, quant10, quant1);

	system("pause");
	return 0;
}