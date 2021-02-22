#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 
	fundamentos da linguagem c
	@author BigJhonny
*/

int main(int argc, char *argv[]) {
	//a linha abaixo configura o indioma para o portuguêshg
	setlocale(LC_ALL,"portuguese");
	// a linha abaixo modifica a cor do backgroud (fundo) e texto
	// color 1º fundo 2º tesxto
	system("color 1C");
	printf("Olá Mundo\n");
	printf("bigjhonny\n");
	system("pause");
	//a linha abaixo "limpa" a tela do pronmpt de comando
	system("cls");
	system("color 30");
	printf("código de cores:\n\n");
	printf("0 -preto\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - verde agua\n");
	printf("4 - vermelho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A- verde claro\n");
	printf("B - verde agua claro\n");
	printf("C -vermelho claro\n");
	printf("D - lilas\n");
	printf("E - amarelo claro\n");
	printf("F - Branco brilhante\n");
	system("pause");
	return 0;
}
