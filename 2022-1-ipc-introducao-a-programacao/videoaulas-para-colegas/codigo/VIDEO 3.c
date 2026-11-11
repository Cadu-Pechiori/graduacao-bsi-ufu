#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*EXERCÍCIO 1
int main() {

    int M[3][3], i, j;

    for ( i=0 ; i<3 ; i++){
        for ( j=0 ; j<3; j++){
            printf("Digite o valor de M[%d][%d]\n", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nSua matriz eh:\n");

    for ( i=0 ; i<3 ; i++){
        for ( j=0 ; j<3; j++){
            printf(" %d ",M[i][j]);
        }
        printf("\n");
    }
}
*/

/*EXERCÍCIO 2
int main() {

    int v1[4], v2[4], v3[4], M[3][4], i, j;

    for ( i=0 ; i<4 ; i++){
        printf("Insira o valor de v1[%d]: ", i+1);
        scanf("%d", &v1[i]);
    }

    for ( i=0 ; i<4 ; i++){
        printf("Insira o valor de v2[%d]: ", i+1);
        scanf("%d", &v2[i]);
    }

    for ( i=0 ; i<4 ; i++){
        printf("Insira o valor de v3[%d]: ", i+1);
        scanf("%d", &v3[i]);
    }

    for ( i=0 ; i<3 ; i++){
        for ( j=0 ; j<4; j++){
            if (i==0){
                M[i][j] = v1[j];
            } else if (i==1){
                M[i][j] = v2[j];
            } else
                M[i][j] = v3[j];
        }
    }

    printf("\nSua matriz eh:\n");

    for ( i=0 ; i<3 ; i++){
        for ( j=0 ; j<4; j++){
            printf(" %d ",M[i][j]);
        }
        printf("\n");
    }

}
*/

/*EXERCÍCIO 3
int main () {

    int N, maior=-9999, i, j;

    printf("Digite o valor de N\n");
    scanf("%d", &N);

    int M[N][N];

    for ( i=0 ; i<N ; i++){
        for ( j=0 ; j<N; j++){
            printf("Digite o valor de M[%d][%d]\n", i+1, j+1);
            scanf("%d", &M[i][j]);
            if ( M[i][j] > maior ){
                maior = M[i][j];
            }
        }
    }

    printf("\nSua matriz eh:\n");

    for ( i=0 ; i<N ; i++){
        for ( j=0 ; j<N; j++){
            printf(" %d ",M[i][j]);
        }
        printf("\n");
    }

    printf("O maior numero da matriz eh: %d", maior);
}
*/

/*EXERCÍCIO 4
int main() {

    int linhas, colunas, i, j;

    printf("Digite a quantidade de linhas das matrizes\n");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas das matrizes\n");
    scanf("%d", &colunas);

    int A[linhas][colunas], B[linhas][colunas], C[linhas][colunas];

    for ( i=0 ; i<linhas ; i++){
        for ( j=0 ; j<colunas; j++){
            printf("Digite o valor de A[%d][%d]\n", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for ( i=0 ; i<linhas ; i++){
        for ( j=0 ; j<colunas; j++){
            printf("Digite o valor de B[%d][%d]\n", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    for ( i=0 ; i<linhas ; i++){
        for ( j=0 ; j<colunas; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSua matriz eh:\n");

    for ( i=0 ; i<linhas ; i++){
        for ( j=0 ; j<colunas; j++){
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }

}
*/

/*EXERCÍCIO 5
int main() {

    int n, m, i, j;

    printf("Digite a quantidade de linhas da matriz\n");
    scanf("%d", &n);

    printf("Digite a quantidade de colunas da matriz e linhas do vetor, que sao as mesmas\n");
    scanf("%d", &m);

    int A[n][m], v[m], resultado[n];

    for ( i=0 ; i<n ; i++){
        for ( j=0 ; j<m; j++){
            printf("Digite o valor de A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for ( j=0 ; j<m ; j++){
        printf("Digite o valor de v[%d]: ", j+1);
        scanf("%d", &v[j]);
    }

    for ( i=0 ; i<n ; i++){
        resultado[i]=0;
    }

    for ( i=0 ; i<n ; i++){
        for ( j=0 ; j<m; j++){
            resultado[i] = resultado[i] + A[i][j]*v[j];
        }
    }

    printf("\nSeu vetor resultado eh:\n");
    for ( i=0 ; i<n ; i++){
            printf(" %d ",resultado[i]);
    }
}
*/

/* EXERCÍCIO 6
int main() {

    int M[4][4], i, j, soma=0;

    for ( i=0 ; i<4 ; i++){
        for ( j=0 ; j<4; j++){
            printf("Digite o valor de M[%d][%d]\n", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    for ( i=0 ; i<4 ; i++){
        for ( j=0 ; j<4; j++){
            if ( i==j ){
                printf("i eh %d --- j eh %d --- M[%d][%d] eh %d\n", i, j, i, j, M[i][j]);
                soma=soma+M[i][j];
            }
        }
    }

    printf("A soma da diagonal principal eh: %d\n", soma);
}
*/

/*
int main() {
    int i, j, k, M[3][2], M2[2][3], M3[3][3];

    //LENDO M1
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("Escreva o digito M[%d][%d] = ",i,j);
            scanf("%d",&M[i][j]);
        }
    }

    //ESCREVENDO M1 NA TELA
    printf("\nsua matriz m1 eh \n");
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf(" %d ",M[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //LENDO M2
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("Escreva o digito M2[%d][%d] = ",i,j);
            scanf("%d",&M2[i][j]);
        }
    }

    //ESCREVENDO M2 NA TELA
    printf("\nsua matriz m2 eh \n");
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf(" %d ",M2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //ATRIBUINDO ZERO PARA TODA A MATRIZ RESULTADO
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            M3[i][j]=0;
        }
    }

    //MULTIPLICANDO M3
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            for (k=0;k<2;k++){
                M3[i][j]= M3[i][j] + ((M[i][k])*(M2[k][j]));
            }
        }
    }

    //ESCREVENDO M3 NA TELA
    printf("\n\nsua matriz multiplicacao eh \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf(" %d ",M3[i][j]);
        }
        printf("\n");
    }

return 0;

}
*/

/*EXERCÍCIO 8
int main(){

    int matriz[4][4] = { {13, 7, 1, 5},{2, 8, 6, 3},{21, 17, 14, 16},{4,1,3,2} };
    int i, j, k, aux;

    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            for (k=j+1;k<4;k++){
                if ( matriz[i][j]>matriz[i][k] ){
                    aux=matriz[i][j];
                    matriz[i][j]=matriz[i][k];
                    matriz[i][k]=aux;
                }
            }
        }
    }

    printf("\nSua matriz eh:\n");

    for ( i=0 ; i<4 ; i++){
        for ( j=0 ; j<4 ; j++){
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }

}
