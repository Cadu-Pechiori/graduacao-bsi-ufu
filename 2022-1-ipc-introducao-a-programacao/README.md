# Introdução à Programação de Computadores (C)

Exercícios em C do primeiro semestre e uma série de videoaulas que eu gravei para ajudar colegas a revisar a matéria antes das provas.

## Sobre

A disciplina cobre o básico de C: entrada e saída, condicionais, laços, vetores, matrizes, strings, ponteiros, alocação dinâmica, funções, recursão, structs e arquivos. Aqui estão:

- **`exercicios/`**: exercícios feitos durante a disciplina (out/2022 a jan/2023): inverter vetor, ordenar vetor, pedra-papel-tesoura, peso ideal e desvio padrão.
- **`exercicios-2023/`**: exercícios escritos em 2023, depois da disciplina, revisando o conteúdo: agregação de valores em um "cubo" 3D alocado com `malloc`, ordenação de nomes com `strcmp`, struct de atletas e funções recursivas (contagem crescente/decrescente e busca em vetor).
- **`videoaulas-para-colegas/`**: material de uma série de videoaulas que eu roteirizei, gravei e editei em jan/2023 para colegas da turma:
  - `roteiro-videos.txt`: o roteiro da série (vetores, matrizes, ponteiros, alocação dinâmica, funções, recursão, strings, structs e arquivos);
  - `listas/`: as listas de exercícios de cada vídeo, montadas por mim (Video 2 a Video 9);
  - `resolucoes/`: as resoluções comentadas em PDF;
  - `codigo/`: as resoluções em C (cada arquivo tem um exercício ativo e os demais comentados);
  - `aula-29-revisao/`: código da aula de revisão que gravei em ago/2023;
  - `alg2-ponteiros-e-funcoes/`: aula sobre ponteiros e funções para Algoritmos 2, de dez/2025 (slides e código).

Os vídeos em si não estão no repositório (arquivos grandes); ficam disponíveis sob pedido.

## Tecnologias

C (C17), compilado com GCC. Na época usei o Code::Blocks.

## Como executar

```bash
gcc -std=c17 -o cubo exercicios-2023/cubo-3d-agregacao/main.c
./cubo

gcc -std=c17 -o video2 "videoaulas-para-colegas/codigo/VIDEO 2.c"
./video2
```

Todos os `.c` desta pasta compilam com `gcc -std=c17` (GCC 16, WinLibs). Alguns usam `gets()`, que era o que a disciplina ensinava; o compilador só emite aviso.

## Contexto acadêmico

- Disciplina: Introdução à Programação de Computadores (GSI002), Bacharelado em Sistemas de Informação, FACOM/UFU
- Semestre: 2022-1 (primeiro período). Trabalho individual.

## O que foi ajustado em 2026

- Fontes convertidos de Latin-1 para UTF-8, para os acentos aparecerem certos no GitHub.
- Correções só de compilação, sem mudar o nível do código:
  - `ordena-nomes`: parêntese no lugar errado em `strcmp(...)`;
  - `funcoes-recursao`: o arquivo estava pela metade; completei `crescente()` e `busca()`;
  - `exercicios-25-10/ex1.c`: comparação com `'h'` e `printf` com o formato certo;
  - `aula-29-revisao/main.c`: faltava um `;`;
  - `VIDEO 2.c`, `VIDEO 3.c`, `VIDEO 4.c`: deixei um exercício ativo por arquivo (estavam todos comentados ou com comentário aberto).
- Lista de arquivos (`.docx`) convertida para Markdown (`listas/Video 9 - Arquivos.md`).
- Bugs de lógica conhecidos que **não** foram corrigidos, para manter o original: em `ex4-vetor-ordenacao` o laço interno incrementa `i` em vez de `j`; em `ex1.c` o `getchar()` lê o `\n` que sobrou do `scanf`.
