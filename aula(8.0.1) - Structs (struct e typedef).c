#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL,"Portuguese");

	//Criando e inicializando
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	puts("Início:");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto alterado");
	
	puts("\nAlterando os campos via código:");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Solicitando inserções via usuário
	puts("\nInsira uma idade:");
	scanf("%d", &pes.idade);
	fflush(stdin);
	
	puts("Insira um peso:");
	scanf("%f", &pes.peso);
	fflush(stdin);
	
	puts("Insira um nome:");
	scanf("%[^\n]s", &pes.nome);
	fflush(stdin);
	
	puts("\nDados inseridos pelo usuário:");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	return 0;
}

