#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int dia;
	printf("insira um valor (1 - 7): ");
	scanf("%d", &dia);
	switch(dia){
		case 1:
			printf("\ndomingo\n");
			break;
		case 2:
			printf("\nsegunda-feira\n");
			break;
		case 3:
			printf("\nter�a-feira\n");
			break;
		case 4:
			printf("\nquarta-feira\n");
			break;
		case 5:
			printf("\nquinta-feira\n");
			break;
		case 6:
			printf("\nsexta-feira\n");
			break;
		case 7:
			printf("\ns�bado\n");
			break;
		default:
			printf("\nc�digo n�o reconhecido. digite um valor de 1 a 4.\n");
	}
	
}
