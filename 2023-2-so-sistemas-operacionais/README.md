# Sistemas Operacionais

Três programas em C sobre verificação de consistência em sistemas de arquivos (a ideia por trás de ferramentas como o `fsck`).

## Sobre

| Arquivo | O que faz |
|---|---|
| `chk1.c` | Recebe o caminho de um dispositivo ou imagem de sistema de arquivos pela linha de comando, abre com `open()` (somente leitura) e lê o primeiro bloco de 512 bytes com `read()`, tratando erros com `perror`. |
| `chk2.c` | Monta em memória uma lista encadeada de blocos e uma tabela de alocação (FAT) simplificada e verifica se os blocos estão em sequência e se a tabela não tem entradas inválidas. |
| `chk3.c` | Abre um arquivo e confere marcadores de início e de fim de 512 bytes com `fseek`/`fread`. |

## Como executar

```bash
gcc -std=c17 -o chk1 chk1.c && ./chk1 imagem.img
gcc -std=c17 -o chk2 chk2.c && ./chk2
gcc -std=c17 -o chk3 chk3.c && ./chk3      # lê "arquivo.txt" na pasta atual
```

Os três compilam com GCC no Windows (MinGW) e no Linux; `chk1.c` usa chamadas POSIX (`open`, `read`, `close`), que também existem no MinGW. Para ler um dispositivo de verdade (por exemplo `/dev/sdb1`), rode no Linux ou no WSL com permissão de leitura. Saída do `chk2` testada nesta revisão:

```
Lista de blocos está consistente.
Tabela de alocação de arquivos está consistente.
```

## Contexto acadêmico

- Disciplina: Sistemas Operacionais (GSI018), Bacharelado em Sistemas de Informação, FACOM/UFU
- Semestre: 2023-2 (arquivos de mar/2024)

## O que foi ajustado em 2026

- Fontes convertidos de Latin-1 para UTF-8. Nenhuma mudança no código.
