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

void busca(int vet, int chave, int tam){
    for (int i=0;i<tam;i++){
        if (vet[i]==chave){
            return i;
        }
    }

    if (y<0){
        return 0;
    }else {
        crescente(y-1);
        printf("%d ", y);
    }
    return;
}

int main()
{
    int *n, m, teste, vet[n];
    printf("Digite o valor de n");
    scanf("%d", &n);

    printf("Descrescente: \n");
    teste = decrescente(n);
    printf("\nCrescente: \n");
    crescente(n);
    return 0;
}
