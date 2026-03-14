#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    int matricula;
    float n1, n2;
}Aluno;

void calculaMedias(Aluno *alunos , int qtd , float *mediaN1, float *mediaN2 ){
    float somaN1=0.0;
    float somaN2=0.0;

    for (int i = 0 ; i<qtd ; i++){
        somaN1 = somaN1 + alunos[i].n1;
        somaN2 = somaN2 + alunos[i].n2;
    }

    *mediaN1 = somaN1/qtd;
    *mediaN2 = somaN2/qtd;
}

int main()
{
    Aluno *alunos;
    int qtd = 5;

    float mediaN1, mediaN2;

    alunos = (Aluno *) malloc(qtd * sizeof(Aluno));

    for (int i = 0 ; i<qtd ; i++){
        printf("\nAluno %d\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].n1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].n2);
    }

    calculaMedias(alunos, qtd, &mediaN1, &mediaN2);

    printf("\nMedia da N1: %.2f", mediaN1);
    printf("\nMedia da N2: %.2f", mediaN2);

    return 0;
}




