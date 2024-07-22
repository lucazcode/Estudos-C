#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char hardText[N] = {"minhasenha123!"};
	char senha_usr[N];
	int ok;
	
	puts("digite um texto:");
	gets(senha_usr);
	fflush(stdin);
	
	ok = strcmp(hardText, senha_usr);
	
	if(ok == 0)
		puts("os textos são iguais.");
	else
		puts("os textos são diferentes.");

	return 0;
}

