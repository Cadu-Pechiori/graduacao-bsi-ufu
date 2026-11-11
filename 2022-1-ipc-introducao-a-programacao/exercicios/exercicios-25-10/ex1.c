#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, homem, mulher;
    char s;
    printf("Digite a altura da pessoa!\n");
    scanf("%f", &altura);
    printf("Essa pessoa é (h)omem ou (m)ulher?\n");
    s=getchar();
    if (s == 'h'){
        homem = 72.7*altura;
        printf("O cálculo é: %f\n", homem);
    }   else {
            mulher = 62.1*altura;
            printf("O cálculo é: %f\n", mulher);
    }
    return 0;
}

