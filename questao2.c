#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nomes[5][80];
    float n1[5],n2[5],n3[5],media[5];

    puts("Informe o nome dos alunos e suas notas:");
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s",&nomes[i]);
        printf("Digite a nota N1 do aluno %d: ", i + 1);
        scanf("%f",&n1[i]);
        printf("Digite a nota N2 do aluno %d: ", i + 1);
        scanf("%f",&n2[i]);
        printf("Digite a nota N3 do aluno %d: ", i + 1);
        scanf("%f",&n3[i]);
        printf("\n");
    }

    for(int i=0; i<5; i++){
        media[i] = (n1[i]+n2[i]+n3[i])/3;

        if(media[i]>=6.0){
            printf("\nNome:%s\nMedia Final:%.2f\nAprovado!\n",nomes[i],media[i]);
        } else{
            printf("\nNome:%s\nMedia Final:%.2f\nReprovado!\n",nomes[i],media[i]);
        }
    }
}