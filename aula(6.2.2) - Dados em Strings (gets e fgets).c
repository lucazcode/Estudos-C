#include <stdio.h>

int main(){
    
    char s[11];
    
    printf("digite algo (leitura pelo gets):\n");
    gets(s);
    fflush(stdin);
    
    puts("\nresultado:");
    puts(s);
    
    printf("\ndigite algo (leitura pelo fgets):\n");
    fgets(s, 10, stdin);
    fflush(stdin);
    
    puts("\nresultado:");
    puts(s);
    
}
