#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* EXERCÍCIO 1
int main () {

    int *px, *py, x, y;

    printf("Digite o valor de x: \n");
    scanf("%d", &x);

    printf("Digite o valor de y: \n");
    scanf("%d", &y);

    printf("\n\nendereco de x eh: %u\n", px);
    printf("endereco de y eh: %u\n", py);
    printf("valor de x eh: %d\n", x);
    printf("valor de y eh: %d\n\n", y);
    printf("endereco de px eh: %u\n", &px);
    printf("endereco de py eh: %u\n\n\n", &py);

    if ( px > py){
        printf("O valor que esta no maior endereco eh: %d", x);
    }
    else {
        printf("O valor que esta no maior endereco eh: %d", y);
    }
    printf("\n\n");
}
*/

/*EXERCÍCIO 2
int main() {

    int v[10], i;

    for ( i=0 ; i<10 ; i++){
        printf("Digite o valor [%d] do vetor: ", i);
        scanf("%d", &v[i]);
    }

    for ( i=0 ; i<10 ; i++){
        printf("O endereco da posicao [%d] do vetor eh: %d\n", i, &v[i]);
    }

}
*/

/* EXERCÍCIO 3
int main() {

    float M[3][3];
    int i, j;

    for ( i=0 ; i<3 ; i++){
        for ( j=0 ; j<3 ; j++){
            printf("Digite o valor de M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for ( i=0 ; i<3 ; i++){
        for ( j=0 ; j<3 ; j++){
            printf(" %u ", &M[i][j]);
        }
    printf("\n");
    }

}
*/

/* EXERCÍCIO 4
int main() {

    int v[5], i;
    int *p;

    for ( i=0 ; i<5 ; i++){
        printf("Digite o valor [%d] do vetor: ", i);
        scanf("%d", &v[i]);
    }

    for ( i=0 ; i<5 ; i++){
        *p = v[i];
        *p = 2*(*p);
        printf("O novo valor [%d] do vetor eh: %d\n", i, *p);
    }

}
*/
