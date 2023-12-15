#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ATLETA{
    char nome[20];
    char esporte[20];
    float peso;
    float altura;
}atleta;



int main()
{
    atleta v[3];
    char nomemaior[20];

    printf("Digite o nome do primeiro atleta: ");
    gets(v[0].nome);

    printf("Digite o esporte do primeiro atleta: ");
    gets(v[0].esporte);

    printf("Digite o nome do segundo atleta: ");
    gets(v[1].nome);

    printf("Digite o esporte do segundo atleta: ");
    gets(v[1].esporte);

    printf("Digite o nome do terceiro atleta: ");
    gets(v[2].nome);

    printf("Digite o esporte do terceiro atleta: ");
    gets(v[2].esporte);

    v[0].peso = 85.5;
    v[0].altura = 1.99;


    v[1].peso = 75.9;
    v[1].altura = 1.75;

    v[2].peso = 82.5;
    v[2].altura = 1.99;

    float maior = 0;

    for (int i = 0 ; i<3 ; i++){
        if (v[i].altura > maior){
            maior = v[i].altura;
        }
    }

    for (int i=0;i<3;i++){
        if(maior==v[i].altura){
            printf("\nO atleta mais alto eh o %s com %.2fm", v[i].nome, v[i].altura);
        }
    }


    return 0;
}
