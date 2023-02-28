#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 20

int main()
{
    int A[TAMANHO], B[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        printf("Vetor A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < TAMANHO; i++)
        B[i] = A[TAMANHO - i - 1];

    for (int i = 0; i < TAMANHO; i++)
        printf("%d", B[i]);
    return 0;
}
