#include <stdio.h>
#include <locale.h>

int main(int argc,char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	if(argc>1){
		system("color 0A");
		printf("\nForam inseridos %d argumentos:\n\n", argc);
		for(i=0;i<argc;i++){
			printf("arg %d: %s\n",i,argv[i]);		
		}
	}
	else{
		system("color 0C");
		printf("Não foram inseridos argumentos adicionais.");
	}

	return 0;
}

