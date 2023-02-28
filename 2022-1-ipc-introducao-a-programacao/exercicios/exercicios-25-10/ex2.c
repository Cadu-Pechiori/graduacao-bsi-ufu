#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char x,y;
    printf("Vamos decidir isso no pedra, papel e tesoura!\n");
    printf("Quem perder vai ter que pagar a coca! Preparados?");
    printf("Jogador 1, faca a sua escolha, pedra(r), papel(p) ou tesoura(s)?");
    x=getchar();
    printf("Jogador 2, faca a sua escolha, pedra(r), papel(p) ou tesoura(s)?");
    y=getchar();
    if (x==y)
        printf("Deu empate!");
         else if (x=='r' && y=='p')
           printf("O Jogador 2 venceu e o Jogador 1 terá que pagar a coca!");
            else if (x=='r' && y=='t')
             printf("O Jogador 1 venceu e o Jogador 2 terá que pagar a coca!");
              else if (x=='p' && y=='t')
               printf("O Jogador 2 venceu e o Jogador 1 terá que pagar a coca!");
                else if (x=='p' && y=='r')
                 printf("O Jogador 1 venceu e o Jogador 2 terá que pagar a coca!");
                  else if (x=='t' && y=='r')
                   printf("O Jogador 2 venceu e o Jogador 1 terá que pagar a coca!");
                    else
                     printf("O Jogador 1 venceu e o Jogador 2 terá que pagar a coca!");
    return 0;
}
