#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota;
	
	printf("digite sua nota: ");
	scanf("%f", &nota);
	
	
	if(nota >= 7.0){
		printf("\nnota necessária para aprovação: 7.0+\n");
		printf("\nsua nota: %.1f", nota);
		printf("\n\nparabéns! você foi aprovado!\n");
	}
	
}
