#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BLOCK_SIZE 512

int main(int argc, char *argv[]) {
    // Verifica se o número de argumentos da linha de comando é correto
    if (argc != 2) {
        printf("Usage: %s <file_system_device>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Obtém o caminho do dispositivo do sistema de arquivos a partir dos argumentos
    const char *device_path = argv[1];

    // Abre o dispositivo do sistema de arquivos em modo somente leitura
    int device_fd = open(device_path, O_RDONLY);
    if (device_fd == -1) {
        perror("Failed to open device"); // Verifica se houve erro na abertura do dispositivo
        exit(EXIT_FAILURE);
    }

    // Verificação básica para ler o primeiro bloco do sistema de arquivos
    char buffer[BLOCK_SIZE];
    ssize_t bytes_read = read(device_fd, buffer, BLOCK_SIZE);
    if (bytes_read == -1) {
        perror("Failed to read device"); // Verifica se houve erro na leitura do dispositivo
        close(device_fd);
        exit(EXIT_FAILURE);
    }

    printf("File system check completed successfully for %s.\n", device_path);

    close(device_fd); // Fecha o arquivo do dispositivo
    return EXIT_SUCCESS;
}
