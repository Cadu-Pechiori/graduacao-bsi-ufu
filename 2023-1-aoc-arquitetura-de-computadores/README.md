# Arquitetura e Organização de Computadores

Seminário sobre memória secundária e uma lista de exercícios em assembly MIPS.

## Sobre

### Seminário: Memória secundária (Grupo 1)

`apresentacao-memoria-secundaria.pdf` (36 slides): história, funcionamento, técnicas, vantagens e desvantagens de discos magnéticos, disquetes, discos IDE, discos SCSI e RAID (níveis 0, 1, 5, 6 e combinações). Eu fiz o design dos slides.

![Capa do seminário](docs/capa.jpg)

### `mips-grupo-9/`: exercícios em MIPS

Quatro programas em assembly MIPS (simulador MARS), com comentários linha a linha:

| Arquivo | O que faz |
|---|---|
| `QUESTAO-1-GRUPO-9.asm` | Lê dois inteiros e imprime o maior. |
| `QUESTAO-2-GRUPO-9.asm` | Vetor de 1 a 10; lê um valor e imprime as posições até ele. |
| `QUESTAO-3-GRUPO-9.asm` | Lê 10 inteiros; compara um valor com o 5º elemento e atualiza as posições pares ou ímpares. |
| `QUESTAO-4-GRUPO-9.asm` | Soma, subtração e multiplicação em funções separadas (`jal`/`jr $ra`), chamadas por um programa principal. |

Esses arquivos são de março/2024, posteriores ao semestre da disciplina, e vêm de uma entrega identificada como "Grupo 9". Os integrantes desse grupo não estão registrados nos arquivos.

## Como executar

Abrir o `.asm` no [MARS](https://dpetersanderson.github.io/) (MIPS Assembler and Runtime Simulator), montar (F3) e executar (F5). A entrada e a saída usam as syscalls do MARS (4 = imprimir string, 5 = ler inteiro, 1 = imprimir inteiro). Não reexecutei os programas nesta revisão.

## Contexto acadêmico

- Disciplina: Arquitetura e Organização de Computadores (GSI013), Bacharelado em Sistemas de Informação, FACOM/UFU
- Semestre: 2023-1
- Seminário em grupo (Grupo 1) com Alicia da Silva Feliciano, Douglas Stuhler Pinheiro, Gustavo Wendel Lopes da Silva, Luisa Mariano Castilho, Nathan Silva Neves e Vinícius Lucas Guimarães, além de Carlos Eduardo da Silva Pechiori (Cadu)
- Depois da disciplina, fui monitor de AOC no programa de tutoria do curso.

## O que foi ajustado em 2026

- Arquivos `.asm` convertidos de Latin-1 para UTF-8; o espaço sobrando no nome de `QUESTAO-3-GRUPO-9.asm` foi removido.
