#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL,"Portuguese");

	char s1[N] = {"lógica de "};
	char s2[N] = {"programação!"};
	
	puts("antes do strcat:");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);
	
	strcat(s1, s2);
	
	puts("depois do strcat:");
	puts(s1);
	
	return 0;
}

