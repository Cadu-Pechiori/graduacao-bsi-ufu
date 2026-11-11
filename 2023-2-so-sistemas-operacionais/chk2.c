#include <stdio.h>
#include <stdlib.h>

// Definição de estrutura de bloco de dados
typedef struct Block {
    int id;
    char data[512];
    struct Block* next;
} Block;

// Definição de estrutura de tabela de alocação de arquivos
typedef struct FAT {
    int id;
    int block_id;
    struct FAT* next;
} FAT;

// Função para verificar a consistência da lista encadeada de blocos
int check_blocks(Block* head) {
    Block* current = head;
    while (current != NULL) {
        if (current->next != NULL && current->id != current->next->id - 1) {
            printf("Inconsistência na lista de blocos!\n");
            return 0;
        }
        current = current->next;
    }
    printf("Lista de blocos está consistente.\n");
    return 1;
}

// Função para verificar a consistência da tabela de alocação de arquivos
int check_fat(FAT* fat) {
    FAT* current = fat;
    int prev_block_id = -1;
    while (current != NULL) {
        if (current->block_id < 0) {
            printf("Inconsistência na tabela de alocação de arquivos!\n");
            return 0;
        }
        if (prev_block_id != -1 && current->block_id != prev_block_id + 1) {
            printf("Inconsistência na tabela de alocação de arquivos!\n");
            return 0;
        }
        prev_block_id = current->block_id;
        current = current->next;
    }
    printf("Tabela de alocação de arquivos está consistente.\n");
    return 1;
}

int main() {
    // Exemplo de lista encadeada de blocos
    Block* block1 = (Block*)malloc(sizeof(Block));
    block1->id = 0;
    Block* block2 = (Block*)malloc(sizeof(Block));
    block2->id = 1;
    Block* block3 = (Block*)malloc(sizeof(Block));
    block3->id = 2;
    block1->next = block2;
    block2->next = block3;
    block3->next = NULL;

    // Exemplo de tabela de alocação de arquivos
    FAT* fat1 = (FAT*)malloc(sizeof(FAT));
    fat1->id = 0;
    fat1->block_id = 0;
    FAT* fat2 = (FAT*)malloc(sizeof(FAT));
    fat2->id = 1;
    fat2->block_id = 1;
    FAT* fat3 = (FAT*)malloc(sizeof(FAT));
    fat3->id = 2;
    fat3->block_id = 2;
    fat1->next = fat2;
    fat2->next = fat3;
    fat3->next = NULL;

    // Verificando a consistência das estruturas
    check_blocks(block1);
    check_fat(fat1);

    // Liberando a memória alocada
    free(block1);
    free(block2);
    free(block3);
    free(fat1);
    free(fat2);
    free(fat3);

    return 0;
}
