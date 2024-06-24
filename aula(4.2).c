#include <stdio.h>

int main(){
	
	float nota;
	
	printf("insira a nota: ");
	scanf("%f", &nota);
	
	if(nota < 7.0){
		printf("\nreprovado(a)!\n");
	}
	else{
		printf("\naprovado(a)!\n");
	}
}
