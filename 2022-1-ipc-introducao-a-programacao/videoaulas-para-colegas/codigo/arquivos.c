#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*//EXERCÍCIO1
int main()
{
    char arquivo1[100], arquivo2[100];
    printf("Arquivo 1: ");
    gets(arquivo1);
    printf("Arquivo 2: ");
    gets(arquivo2);

    FILE *a1 = fopen(arquivo1, "r");
    if (a1 == NULL){
        printf("Nao abriu o Arquivo 1");
        return 0;
    }

    FILE *a2 = fopen(arquivo2, "r");
    if (a2 == NULL){
        printf("Nao abriu o Arquivo 2");
        return 0;
    }

    FILE *dest = fopen("destino.txt", "w");
    if (dest == NULL){
        printf("Nao abriu destino.txt");
        return 0;
    }

    char buffer[100];
    while(!feof(a1)){
        fgets(buffer,100, a1);
        fputs(buffer,dest);
    }

    while(!feof(a2)){
        fgets(buffer,100, a2);
        fputs(buffer,dest);
    }

    while(1){
        fgets(buffer,100,a1);
        if(feof(a1))
            break;
        fputs(buffer,dest);
    }
    while(1){
        fgets(buffer,100,a2);
        if(feof(a2))
            break;
        fputs(buffer,dest);
    }
    fclose(a1);
    fclose(a2);
    fclose(dest);


    return 0;
}
*/
/*//EXERCÍCIO2
int main() {

    FILE *arquivo = fopen("inteiros.bin", "wb");

    if (arquivo == NULL){
        printf("Nao foi possivel criar o arquivo!");
        return 0;
    }

    int numeros = 1;

    for (int i = 0; i < 100; i++) {
        fwrite(&numeros, sizeof(int), 1, arquivo);
        numeros = numeros + 1;
    }
    fclose(arquivo);

    printf("Arquivo criado com sucesso!\nAperte enter para continuar.\n");
    getchar();

    arquivo = fopen("inteiros.bin", "rb");

    if (arquivo == NULL){
        printf("Nao foi possivel abrir o arquivo!");
        return 0;
    }

    int soma = 0;

    printf("Os numeros sao:\n");
    for (int i = 0; i < 100; i++) {
        fread(&numeros, sizeof(int), 1, arquivo);
        printf("%d ", numeros);
        soma += numeros;
    }

    printf("\n\nA soma dos numeros eh: %d\n\n", soma);

    fclose(arquivo);



    return 0;
}
*/

/*//EXERCÍCIO 3
int main() {
    char arquivo[30], prod[30];
    float quantidade, preco, total = 0;

    printf("Arquivo: ");
    gets(arquivo);

    FILE *compras = fopen(arquivo, "r");
    if (compras == NULL){
        printf("Nao foi possivel abrir o arquivo %s", arquivo);
        return 0;
    }

    while(1){
        fscanf(compras, "%s %f %f", prod, &quantidade, &preco);
        total = total + (quantidade*preco);
        if(feof(compras))
            break;
        }

    printf("\nO total das suas compras eh: %.2f\n\n", total);
    return 0;

}
*/


//EXERCÍCIO4
int main() {
    char nome[100];

    printf("Digite o nome do arquivo: ");
    gets(nome);

    FILE *arq = fopen(nome, "r");

    if (arq == NULL){
        printf("Nao abriu %s", nome);
        return 0;
    }

    char busca[100];
    printf("Busca: ");
    gets(busca);

    char buffer[1024];

    int contagem = 0;

    while(!feof(arq)){
        fgets(buffer,1024,arq);
        char *ocorrencia = buffer;
        while (ocorrencia != NULL){
            ocorrencia = strstr(ocorrencia, busca);
            if (ocorrencia != NULL){
                contagem++;
                ocorrencia++;
            }
        }
    }
    printf("\nA palavra %s aparece %d vezes no arquivo\n\n", busca, contagem);


return 0;
}
