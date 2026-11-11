#include <stdio.h>

#define BLOCK_SIZE 512

// Função para verificar a consistência de um arquivo
int check_file_consistency(FILE* file) {
    // Verifica se o arquivo é válido
    if (file == NULL) {
        printf("Erro: arquivo inválido!\n");
        return 0;
    }

    // Verifica a consistência do arquivo
    fseek(file, 0, SEEK_SET); // Move o ponteiro do arquivo para o início

    // Verifica o marcador de início
    char start_marker[BLOCK_SIZE];
    fread(start_marker, sizeof(char), BLOCK_SIZE, file);
    if (start_marker[0] != '$' || start_marker[BLOCK_SIZE - 1] != '$') {
        printf("Erro: marcador de início inválido!\n");
        return 0;
    }

    // Verifica o marcador de fim
    fseek(file, -BLOCK_SIZE, SEEK_END); // Move o ponteiro do arquivo para o final
    char end_marker[BLOCK_SIZE];
    fread(end_marker, sizeof(char), BLOCK_SIZE, file);
    if (end_marker[0] != '$' || end_marker[BLOCK_SIZE - 1] != '$') {
        printf("Erro: marcador de fim inválido!\n");
        return 0;
    }

    printf("Verificação de consistência bem-sucedida!\n");
    return 1;
}

int main() {
    // Abre o arquivo para leitura
    FILE* file = fopen("arquivo.txt", "rb"); // Supondo que "arquivo.txt" seja o nome do arquivo

    // Verifica a consistência do arquivo
    check_file_consistency(file);

    // Fecha o arquivo
    fclose(file);

    return 0;
}
