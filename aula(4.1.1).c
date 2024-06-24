#include <stdio.h>

int main(){
	
	float nota;
	
	printf("insira a nota: ");
	scanf("%f", &nota);
	
	if(nota >= 4.0 && nota < 7.0){
		printf("\ntem direito ao exame.\n");
	}
	
}
