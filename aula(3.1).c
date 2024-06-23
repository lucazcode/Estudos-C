#include <stdio.h>

#define texto "entrada e saida de dados\n"

int main(){
	
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("digite a idade: ");
	scanf("%d", &idade);
	
	printf("digite a altura: ");
	scanf("%f", &altura);
	
	printf("digite o nome: ");
	scanf("%s", &nome);
	
	printf("\ndados informados:\n");
	printf("idade: %d anos\n", idade);
	printf("altura: %.2fm\n", altura);
	printf("nome: %s\n", nome);
	
} 
