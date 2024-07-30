#include <stdio.h>
#include <locale.h>

float maior(float num1, float num2);

int main(){
	setlocale(LC_ALL,"Portuguese");

	float x,y,m;
	puts("Insira um valor:");
	scanf("%f", &x);
	puts("Insira o segundo valor:");
	scanf("%f", &y);

	m = maior(x,y);
	
	printf("\nO maior valor é: %.2f.", m);
		
	return 0;
}

float maior(float num1, float num2){
	if(num1>num2){
		return num1;
	}
	else{
		return num2;
	}
	
	return 0;
}

