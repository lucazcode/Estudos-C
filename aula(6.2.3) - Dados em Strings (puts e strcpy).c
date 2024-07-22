#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char origem[N] = {"olá, mundo!"};
	char destino[N];
	
	puts("antes do strcpy:");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem);
	
	puts("depois do strcpy:");
	puts(origem);
	puts(destino);
	
	return 0;
}
