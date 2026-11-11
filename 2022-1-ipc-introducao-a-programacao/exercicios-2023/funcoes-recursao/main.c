#include <stdio.h>
#include <stdlib.h>

int decrescente(int x){
    if (x==0){
        printf("%d", x);
        return 0;
    }else{
        printf("%d ",x);
        return decrescente(x-1);}
}

void crescente(int y){
    if (y<0){
        return;
    }
    crescente(y-1);
    printf("%d ", y);
}

int busca(int vet[], int chave, int tam){
    for (int i=0;i<tam;i++){
        if (vet[i]==chave){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, teste;
    int vet[5] = {3, 8, 1, 9, 4};

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Descrescente: \n");
    teste = decrescente(n);
    printf("\nCrescente: \n");
    crescente(n);

    printf("\nPosicao de %d no vetor {3, 8, 1, 9, 4}: %d\n", n, busca(vet, n, 5));
    return teste;
}
