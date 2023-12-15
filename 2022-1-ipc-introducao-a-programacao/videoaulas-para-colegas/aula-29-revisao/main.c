#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){

    int i, num=1;
    int opcao, resultado;

    printf("Digite um valor inteiro ");
    scanf("%d",&opcao);

    for ( i=0 ; i<10 ; i++ ){
        resultado = opcao*(i+1);
        printf("\n%dx%d = %d",opcao,i+1,resultado)
    }


}
