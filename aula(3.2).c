#include <stdio.h>

int main(){
	
	printf("operadores aritm�ticos:\n\n");
	
	int A, B, soma, sub, mult, div;
	
	printf("digite o primeiro valor: ");
	scanf("%d", &A);
	
	printf("digite o segundo valor: ");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A * B;
	div = A % B;
	
	printf("\nresultados:\n\n");
	printf("soma dos valores: %d\n", soma);
	printf("subtra��o dos valores: %d\n", sub);
	printf("multiplica��o dos valores: %d\n", mult);
	printf("divis�o dos valores: %d\n\n", div);
	
	printf("atribui��es aritm�ticas:\n\n");
	
	int dado = 10;
	printf("dado antes do incremento: %d\n", dado);
	
	dado++;
	printf("depois do incremento: %d\n", dado);
	
	dado--;
	printf("depois do decrimento: %d\n", dado);
	
	dado += 5;
	printf("depois do incremento com 5 unidades: %d\n", dado);
	
	dado -= 2;
	printf("depois do decrimento de 2 unidades: %d\n", dado);
	
	dado *= 10;
	printf("depois de multiplicar em 10 unidades: %d\n", dado);
	
}
