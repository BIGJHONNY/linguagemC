#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
	calculo da media
	@author Jonathan S
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	printf("calculo da media\n");
	// variaveis
	float nota1,nota2,media;
	// entrada de dados
	printf("digite a nota 1: ");
	scanf("%f",&nota1);
	printf("digite a nota 2: ");
	scanf("%f",&nota2);
	// processamento
	media = (nota1+nota2)/2;
	//saida
	printf("resultado:%.1f\n",media);
	system("pause");
	return 0;
}
