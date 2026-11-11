#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* EXERCÍCIO 1
int main(){
    int N, i;
    float soma=0, quantidade;

    printf("Insira a quantidade de alunos: ");
    scanf(" %d", &N);

    float *notas = (float *) malloc ( N * sizeof (float));

    for ( i=0 ; i<N ; i++){
        printf("Insira a nota do %d aluno: ", i);
        scanf("%f", &notas[i]);
    }

    quantidade = N;
    for ( i=0; i<N ; i++){
        soma = soma+notas[i];
    }
    printf("\nA media aritmetica das notas eh: %.2f", soma/N);

    printf("\n");



    return 0;
}
*/

/* EXERCÍCIO 2
int main() {
    int n, cont=0, min, max, i, j=0;

    printf("Digite a quantidade de elementos do vetor V\n");
    scanf("%d", &n);

    int *V = (int *) malloc ( n * sizeof (int));

    printf("\nDigite o valor minimo\n");
    scanf("%d", &min);

    printf("Digite o valor maximo\n");
    scanf("%d", &max);

    for ( i=0 ; i<n ; i++){
        printf("Insira o valor %d do vetor: ", i+1);
        scanf("%d", &V[i]);
        if ( V[i] >= min && V[i] <= max){
            cont++;
        }
    }

    int *Vlimitado = (int *) malloc ( cont * sizeof (int));

    for ( i=0 ; i<n ; i++){
        if ( V[i] >= min && V[i] <= max){
            Vlimitado[j] = V[i];
            j++;
        }
    }

    printf("Seu vetor com a limitacao eh:\n");

    for ( i=0 ; i<cont ; i++){
        printf("%d ", Vlimitado[i]);
    }
}
*/
/* EXERCÍCIO 3
int main(){
    int n1, n2, n3, i;

    printf("Digite a quantidade de elementos do vetor v1\n");
    scanf("%d", &n1);

    int *v1 = (int *) malloc ( n1 * sizeof (int));

    printf("Digite a quantidade de elementos do vetor v2\n");
    scanf("%d", &n2);

    int *v2 = (int *) malloc ( n2 * sizeof (int));

    n3 = n1+n2;

    int *v3 = (int *) malloc ( n3 * sizeof (int));

    for ( i=0 ; i<n1 ; i++){
        printf("Insira o valor %d do vetor v1: ", i+1);
        scanf("%d", &v1[i]);
    }

    for ( i=0 ; i<n2 ; i++){
        printf("Insira o valor %d do vetor v2: ", i+1);
        scanf("%d", &v2[i]);
    }

    printf("Seu vetor v3 eh:\n");

    for ( i=0 ; i<n3 ; i++){
        if (i<n1){
            v3[i] = v1[i];
        } else {
            v3[i] = v2[i-n1];
        }
        printf("%d ", v3[i]);
    }
}
*/

int main (){

    int n, i, j, k=0, sorteio[20], cont;

    printf("Digite a quantidade de numeros da sua aposta\n");
    scanf("%d", &n);

    int *aposta = (int *) malloc ( n * sizeof (int));

    printf("Agora faca a sua aposta\n");

    for ( i=0 ; i<n ; i++){
        printf("Digite o %do numero de 0 a 100: ", i+1);
        scanf("%d", &aposta[i]);
    }

    printf("Sua aposta eh:\n");

    for ( i=0 ; i<n ; i++){
        printf("%d ", aposta[i]);
    }

    for ( i=0 ; i<20 ; i++){
        sorteio[i] = rand() % 20;
    }

    for ( i=0 ; i<n; i++){
        for ( j=0 ; j<20 ; j++){
            if ( aposta[i]==sorteio[j]){
                cont++;
            }
        }
    }

    int *acertos = (int *) malloc ( cont * sizeof (int));

    for ( i=0 ; i<n; i++){
        for ( j=0 ; j<20 ; j++){
            if ( aposta[i]==sorteio[j]){
                acertos[k]=aposta[i];
                k++;
            }
        }
    }

    printf("\nVoce acertou %d numeros", cont);

    if (cont>0){
        printf(" e eles foram os: ", cont);
        for ( i=0 ; i<k ; i++){
            printf("%d ", acertos[i]);
        }
    }
    srand(time(NULL));


}
