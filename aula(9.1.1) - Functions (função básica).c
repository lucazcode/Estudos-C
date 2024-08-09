#include <stdio.h>
#include <locale.h>

float maior_menor(float num1, float num2){
	if(num1 > num2){
		return num1;
	}
	else{
		return num2;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x, y;
	
	puts("CONFERIR NÚMERO MAIOR\n");
	
	printf("Digite o primeiro número: ");
	scanf("%f", &x);
	
	printf("\nDigite o segundo número: ");
	scanf("%f", &y);
	
	float res = maior_menor(x, y);
	
	printf("\nO maior número é: %.2f", res);
		
	return 0;
}

