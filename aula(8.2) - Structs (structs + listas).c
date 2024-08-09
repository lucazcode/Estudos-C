#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL,"Portuguese");

	tipo_pessoa lista[TAM];
	int i;
	
	for(i=0;i<TAM;i++){
		printf("Insira os Dados no registro %d:\n\n", i+1);
		
		printf("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		printf("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		printf("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
		
		puts("");
	};
	
	system("cls");
	system("color 0A");
	
	puts("\tRegistro de dados");
	
	for(i=0;i<TAM;i++){
		printf("\n----------- Pessoa %d -----------\n\n", i+1);
		printf("\tNome: %s\n", lista[i].nome);
		printf("\tIdade: %d\n", lista[i].idade);
		printf("\tPeso: %.2f kg\n", lista[i].peso);
	}
	printf("\n--------------------------------");

	return 0;
}

