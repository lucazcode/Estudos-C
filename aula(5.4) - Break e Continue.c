#include <stdio.h>

int main(){
	int i;
	for(i=1; i<=10; i++){
		if(i==5){
			printf("cinco ");
			continue;
		}
		else if(i==10){
			printf("dez ");
			continue;
		}	
		printf("%d ", i);
	}
}
