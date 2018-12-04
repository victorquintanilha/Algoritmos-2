#include "pch.h"
#include <iostream>
#include <locale>

int tempoGasto, velocidadeMedia;
float distancia, litrosUsados;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Favor, informe qual o tempo gasto na viagem: ");
	scanf_s("%d", &tempoGasto);
	printf("Informe também, a velocidade média: ");
	scanf_s("%d", &velocidadeMedia);

	distancia = tempoGasto * velocidadeMedia;
	litrosUsados = distancia / 12;

	system("cls");
	printf("========== Dados da viagem ==========\n\n");
	printf("Velocidade média: %d\n", velocidadeMedia);
	printf("Tempo gasto: %d\n", tempoGasto);
	printf("Distância percorrida: %.2f\n", distancia);
	printf("Quantidade de litros usados: %.2f\n\n", litrosUsados);
	printf("=====================================\n\n");

	system("pause");
}