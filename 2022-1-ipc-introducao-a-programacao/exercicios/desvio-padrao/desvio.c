#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, soma;
    float somatoria, media, d;
    printf("Digite a quantidade de valores");
    scanf("%d", &n);
    int V[n];
    for (i=0;i<n;i++){
        printf("Digite o %d o numero", i+1);
        scanf("%d", &V[i]);
    }
    for (i=0;i<n;i++){
        soma=soma + V[i];
        media = soma/n;
    }
    for (i=0;i<n;i++){
        somatoria = somatoria + (V[i] - media)*(V[i] - media);
        d = sqrt(somatoria/n);
    }
    printf("o desvio eh %f", d);
}
