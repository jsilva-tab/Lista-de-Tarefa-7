#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

int main(){
    char nomes[TAM][80],nomeEntrada[80];

    puts("Insira a seguir o nome dos alunos aprovados:");
    for(int i=0; i<TAM; i++){
        printf("Nome do aluno %d:",i+1);
        gets(nomes[i]);
        printf("\n");
    }

    puts("Insira o nome de entrada:");
    gets(nomeEntrada);

    int aprovado = 0;
    for(int i=0; i<TAM; i++){
        if(strcmp(nomeEntrada,nomes[i])==0){
            printf("Nome: %s\nEste aluno esta na lista de aprovado na posicao %d.\n",nomeEntrada,i+1);
            aprovado = 1;
            break;
        }
    }

    if(!aprovado){
        puts("Nome nao consta na lista.");
    }

}
