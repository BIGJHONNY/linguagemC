#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Cálculo do IMC
	@author Jonathan Santana
*/

int main(int argc, char *argv[]) {
	system("color 16");
	setlocale(LC_ALL,"portuguese");
	printf("8888888888b     d888 .d8888b.\n");
  	printf("  888  8888b   d8888d88P  Y88b\n"); 
  	printf("  888  88888b d88888888    888\n"); 
  	printf("  888  888Y88888P888888\n");        
  	printf("  888  888 Y888P 888888\n");        
  	printf("  888  888  Y8P  888888    888\n"); 
  	printf("  888  888   Y   888Y88b  d88P\n"); 
	printf("8888888888       888  Y8888P\n");
	printf("\n");
	// Variaveis 
	float imc,peso,altura;
	//entrada
	printf("Digite o seu pelo em Kg:");
	scanf("%f",&peso);
	printf("Digite a sua altura em Metros");
	scanf("%f",&altura);
	// procesamento 
	imc = peso / (altura * altura);
	// Saida
	printf("IMC: %.2f\n", imc);
	system("pause");
	return 0;
} 
