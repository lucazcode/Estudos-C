#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL,"Portuguese");

	char s[N];
	int i;
	
	puts("digite um texto:");
	gets(s);
	i = strlen(s);
	printf("tamanho do texto: %d\n\n", i);
	
	printf("impress�o posi��o a posi��o:\n");
	for(i=0; i<strlen(s); i++){
		printf("%d:%c ", i, s[i]);
	}
	
	return 0;
}

