#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota;
	
	printf("digite sua nota: ");
	scanf("%f", &nota);
	
	
	if(nota >= 7.0){
		printf("\nnota necess�ria para aprova��o: 7.0+\n");
		printf("\nsua nota: %.1f", nota);
		printf("\n\nparab�ns! voc� foi aprovado!\n");
	}
	
}
