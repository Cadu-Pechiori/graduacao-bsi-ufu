# Arquivos

> Convertido em 2026 a partir do original `arquivos2.docx` (lista da videoaula de arquivos, jan/2023).
> As resoluções dos exercícios 1 a 4 estão em [`../codigo/arquivos.c`](../codigo/arquivos.c).

1. Faça um programa que leia do usuário os nomes de dois arquivos texto. O programa deve criar um terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).

2. Faça um programa que crie um arquivo binário contendo 100 números inteiros e feche o arquivo. Em seguida, abra-o novamente, leia os números, e apresente a soma.

3. Faça um programa que leia um arquivo com os nomes, quantidades e preços de diversos produtos, um por linha, e calcule o total da compra.

   Para a lista de compras a seguir, o total deve ser R$ 63,10:

   ```
   Miojo 10 1.80
   Ovos 12 0.80
   Pao 2 0.6
   Leite 2 4.2
   Sardinha 5 3.4
   Salsicha 1 8.9
   ```

4. Faça um programa no qual o usuário informe o nome de um arquivo texto e uma palavra para busca, e o programa apresente o número de vezes que aquela palavra aparece dentro do arquivo.

   Dica: utilize a função `strstr` presente na biblioteca `<string.h>`. A função `strstr(nome1, nome2)` devolve um ponteiro para o começo da primeira aparição de `nome2` na string `nome1`.

5. Crie uma estrutura que represente um atleta. A estrutura deve conter o nome do atleta, seu esporte, idade, peso e altura. Escreva um programa que leia os dados de cinco atletas e salve em um arquivo binário as estruturas. Feche o arquivo. Abra-o novamente, leia o terceiro registro, altere o nome e a idade do atleta, salve o registro sobre o terceiro registro. Retorne ao início do arquivo sem fechá-lo e exiba os dados dos 5 atletas. Utilize as funções `fseek`, `fread` e `fwrite` para manipular os registros.
