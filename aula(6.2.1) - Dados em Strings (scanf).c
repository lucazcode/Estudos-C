#include <stdio.h>

int main(){
    
    char s[11];
    
    printf("digite algo (scanf convencional):\n");
    scanf("%s", s);
    fflush(stdin);
    printf("resultado: %s\n\n", s);
    
    printf("digite algo (scanf aprimorado):\n");
    scanf("%10[^\n]s", s);
    fflush(stdin);
    
    printf("resultado: %s\n\n", s);
    
}
