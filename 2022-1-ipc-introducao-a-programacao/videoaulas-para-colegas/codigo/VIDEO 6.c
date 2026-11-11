#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*//EXERCÍCIO NÚMERO 1
int main (){
    char frase[200];
    int i;
    printf("Escreva uma frase\n");
    gets(frase);
    for ( i = 0 ; frase[i] != '\0'; i++){
        if (frase[i] >= 97 && frase[i] <= 122) {
            frase[i] = frase[i]-32;
        }
    }
    fputs(frase, stdout);
    return 0;
}
*/

/*//EXERCÍCIO NÚMERO 2
int main (){
    char frase[200], temp;
    int i, j, l;
    printf("Escreva uma frase\n");
    gets(frase);
    j=strlen(frase);
    l=j-1;
    for ( i = 0 ; i <= (j/2) ;i++){
        temp = frase[i];
        frase[i] = frase[l];
        frase[l]=temp;
        l--;
        }
    fputs(frase, stdout);
    return 0;
}
*/


//EXERCÍCIO NÚMERO 3
int main (){
    char frase2[200], frase[200], temp;
    int i, j, l, k;
    printf("Escreva uma frase\n");
    gets(frase);

    //FAZER DEPOIS retira os espaçoçs da frase
    for ( i = 0 ; frase[i] != '\0' ;i++){
        if (frase[i] == ' '){
            for ( j = i ; frase[j] != '\0' ;j++){
                frase[j] = frase[j+1];
            }
        }
    }

    j=strlen(frase);
    l=j-1;

    //inverte a frase e joga em frase2
    for ( i = 0 ; i <= j ;i++){
        frase2[i] = frase[l];
        l--;
    }

    //compara as duas frases
    if(strcmp(frase,frase2) == 0){
        printf("\nEh palindromo");
   }else{
        printf("\nNao eh palindromo");
    }
    return 0;
}



/*//EXERCÍCIO NÚMERO 4
int main (){
    char M[20] = "Stephane";
    char N[20] = "Julia";
    char R[20] = "Humberto";

        //compara as frases
        //explicar que é o primeiro
        //menos o segundo como se fossem números
        //primeiro if verifica quem eh o primeiro
        //segundo if verifica quem eh o segundo
    if (strcmp(M,N) <= 0 && strcmp(M,R) <= 0){
        if (strcmp(N,R) <= 0){
            fputs(M, stdout);
            fputs(N, stdout);
            fputs(R, stdout);
        }
        else{
            fputs(M, stdout);
            fputs(R, stdout);
            fputs(N, stdout);
        }
    }
    if (strcmp(N,M) <= 0 && strcmp(N,R) <= 0){
        if (strcmp(M,R) <= 0){
            fputs(N, stdout);
            fputs(M, stdout);
            fputs(R, stdout);
        }
        else{
            fputs(N, stdout);
            fputs(R, stdout);
            fputs(M, stdout);
        }
    }
       if (strcmp(R,M) <= 0 && strcmp(R,N) <= 0){
        if (strcmp(M,N) <= 0){
            fputs(R, stdout);
            fputs(M, stdout);
            fputs(N, stdout);
        }
        else{
            fputs(R, stdout);
            fputs(N, stdout);
            fputs(M, stdout);
        }
    }
    return 0;
}
*/

/*//EXERCÍCIO NÚMERO 5
int main() {
    int i, j, n;
    char M[20][30];
    char menor[20] = "zzzzzzzzz";
    printf("Digite quantos nomes serao inseridos\n");
    scanf("%d", &n);
    setbuf(stdin,NULL);
    for ( j = 0 ; j <= n-1 ;j++){
        printf("Digite o %d nome\n", j+1);
        gets(M);
        if (strcmp(M,menor) <= 0){
            strcpy(menor,M);
        }
    }
    printf("O primeiro nome da lista eh: ");
    fputs(menor, stdout);
    // leia cada string M[i]
    // localize o elemento que seria primeiro
    // de uma lista ordenada
}
*/

/*//EXERCÍCIO NÚMERO 6
int main (){
    char frase[200];
    int n, i;

    printf("Digite o numero que sua criptografia vai usar: ");
    scanf("%d", &n);
    setbuf(stdin,NULL);
    printf("Escreva uma frase\n");
    gets(frase);
    for ( i = 0 ; frase[i] != '\0'; i++){
        if (frase[i] != ' ') {
            frase[i] = frase[i]+n;
        }
    }
    fputs(frase, stdout);
    return 0;
}
*/
/*//EXERCÍCIO 7
int main() {

    char temp[12];
    char lista[21][12] = { "Vinicius", "Guilherme", "Vitor", "Lucas", "Igor", "Joao", "Pedro", "Abel", "Luiz", "Wemerson", "Rafael", "Pablo", "Saint", "Thais", "Matheus", "Douglas", "Gabriel", "Viviane", "Reginaldo", "Jose", "Leonardo"};

    for (int i = 0; i < 21; i++){
        for (int j = i+1; j < 21; j++){
            if (strcmp(lista[i],lista[j]) > 0){
                strcpy(temp,lista[i]);
                strcpy(lista[i],lista[j]);
                strcpy(lista[j],temp);
            }

        }
    }

    printf("\n\nApos ordenar:\n=====================\n");
    for (int i = 0; i < 21; i++)
        printf("%s\n",lista[i]);

return 0;
}
*/

