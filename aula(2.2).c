#include <stdio.h>

int main(){
	
	int idade = 0;
	float peso = 0;
	
	printf("valor inicial da idade: %d anos\n", idade);
	printf("valor inicial do peso: %d kg\n", idade);
	
	printf("digite uma idade: ");
	scanf("%d", &idade);
	
	printf("digite um peso: ");
	scanf("%f", &peso);
	
	printf("idade inserida: %d anos\n", idade);
	printf("peso inserido: %.2f kg\n", peso);
	
}
