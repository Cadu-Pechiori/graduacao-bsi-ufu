#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*EXERCÍCIO 1
int main() {

    int vetor[9], i;

    for ( i=0 ; i<10 ; i++){
        printf("Digite o %d valor do vetor \n", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Seu vetor eh:\n");

    for ( i=0 ; i<10 ; i++){
        printf("%d", vetor[i]);
    }

}
*/

/*EXERCÍCIO 2
int main() {
    int vetor[9], i;

    for ( i=0 ; i<10 ; i++){
        printf("Digite o %d valor do vetor \n", i+1);
        scanf("%d", &vetor[i]);
    }

    for ( i=0 ; i<10 ; i++){
        if ( vetor[i]%2 == 0){
            printf("\n%d eh PAR", vetor[i]);
        } else{
            printf("\n%d eh IMPAR", vetor[i]);
        }

    }
}
*/

/*EXERCÍCIO 8
int main() {

    int n, i;
    float S=0;

    printf("Digite a quantidade de valores que o vetor tera\n");
    scanf("%d", &n);

    int v[n];

    for ( i=0 ; i<n ; i++){
        printf("Digite o %d valor do vetor\n", i+1);
        scanf("%d", &v[i]);
    }

    for ( i=0 ; i<n ; i++){
        S=S+(i+1)/(v[i]);
    }
    printf("\nA serie S vale: %.2f", S);
}
*/

//EXERCÍCIO 11
int main() {
    int i, j, v[20], aux;

    for (i=0; i < 20; i++){
        printf ("Digite um numero: ");
        scanf("%d",&v[i]);
    }

    for (i=0;i<20;i++){
        for (j=i+1;j<20;j++){
            if (v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    printf ("\nNumeros em ordem crescente \n");

    for (i=0; i<20; i++){
        printf("%d ",v[i]);
    }

return 0;
}
