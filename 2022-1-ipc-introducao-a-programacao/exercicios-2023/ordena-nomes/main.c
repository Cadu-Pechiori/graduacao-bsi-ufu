#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char auxiliar[200];
    char alunos[5][200] = { "Caio", "Anna Carla", "Amanda", "Douglas", "Davi"};

    for (int i = 0 ; i < 5 ; i++){
        for (int j = i+1 ; j < 5 ; j++){
            if(strcmp(alunos[i],alunos[j])>0){
                strcpy(auxiliar,alunos[j]);
                strcpy(alunos[j],alunos[i]);
                strcpy(alunos[i],auxiliar);
            }
        }
    }

    for (int i=0;i<5;i++){
        fputs(alunos[i],stdout);
    }

    return 0;

}
