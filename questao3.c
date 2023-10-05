#include <stdio.h>
#include <string.h>

int main(){
    char strng[20];
    int qtdLetras,vogais=0;

    puts("Insira uma palavra:");
    scanf("%s",&strng);

    qtdLetras = strlen(strng);

    for(int i=0; i<qtdLetras; i++){
        switch (strng[i])
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            vogais++;
            break; 
        }
    }

    printf("Total de vogais: %d\n",vogais);
}