#include <stdio.h>

//MANEIRA BRUTA:
//
//int main(){
//	
//	int vetor[5];
//	
//	int calculo;
//	
//	vetor[0] = 50;
//	vetor[1] = 40;
//	vetor[2] = 30;
//	vetor[3] = 20;
//	vetor[4] = 10;
//	
//	calculo = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4]) / 3;
//	
//	printf("resultado: %d", calculo);
//		
//}

//MANEIRA SIMPLIFICADA:

//int main(){
//	
//	int vetor[5] = {10, 20, 30, 40, 50};
//	
//	int indice;
//	
//	int soma = 0;
//	
//	for(indice = 0; indice < 5; indice++){
//		
//		soma += vetor[indice];
//		
//	}
//	
//	printf("resultado: %d", soma);
//	
//}

//MANEIRA SIMPLIFICADA + INPUT USUÁRIO

#include <stdio.h>

int main(){
	
	int v[5];
	int i;
	int coord;
	
	for(i=0,coord=0;i<5;i++,coord++){
		printf("insira um dado na coordenada #%d: ", coord);
		scanf("%d",&v[i]);
	}
	
	printf("\ndados inseridos:\n");
	for(i=0;i<5;i++){
		printf("%d\n",v[i]);
	}
	
}

