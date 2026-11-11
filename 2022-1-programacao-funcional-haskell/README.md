# Programação Funcional (Haskell)

Exercícios de aula e o Trabalho 3 da disciplina de Programação Funcional, escritos entre nov/2022 e jan/2023.

## Sobre

| Arquivo | Conteúdo |
|---|---|
| `trab03-carlos.hs` | **Trabalho 3**: tabela de produtos como lista de tuplas `(Código, Nome, Preço)`; funções para buscar nome e preço por código, somar uma compra com `map`/`foldr` e gerar uma nota fiscal formatada em arquivo (`writeFile`). |
| `notaFiscal.txt` | Saída gerada pelo Trabalho 3 para a compra `[1, 3, 5]`. |
| `lista04.hs` | Lista de recursão: NAND com `if`, guardas e casamento de padrões, MDC/MMC, somatórios, combinação, série de `e^x`, contagem e soma de dígitos, Ackermann. |
| `11-30-recursiva.hs` | Quociente, resto e potência por recursão; NAND e XOR. |
| `12-07-lista03.hs`, `lista03.hs` | Recursão com IO (`imprimeNVezes`), "e" lógico, fatorial/combinação e verificador de palíndromo. |
| `mult.hs`, `menuop.hs`, `eleitor.hs`, `salvar.hs` | Entrada e saída: leitura do teclado, menus com `case`, conversão de temperatura, situação do aluno, classe eleitoral e gravação em arquivo. |
| `01-20.hs` | Funções de alta ordem: `duas_vezes`, soma de quadrados com `foldr`/`map` e `filter`. |

## Tecnologias

Haskell (GHC/GHCi). Os arquivos eram carregados no GHCi e as funções chamadas pelo prompt, por exemplo:

```
ghci trab03-carlos.hs
ghci> geraNotaFiscal [1, 3, 5]
```

## Contexto acadêmico

- Disciplina: Programação Funcional (GSI004), Bacharelado em Sistemas de Informação, FACOM/UFU
- Semestre: 2022-1. Exercícios e trabalho individuais.

## Observações (2026)

- Nesta organização só selecionei e removi duplicatas (rascunhos e arquivos vazios ficaram de fora); o código está como foi escrito.
- Não recompilei com GHC nesta revisão. Alguns arquivos são anotações de aula e não carregam inteiros no GHCi (por exemplo, `xorCor` em `11-30-recursiva.hs` usa `-` no lugar de `=`, e `eleitor.hs` tem um `if` sem `else`). O `trab03-carlos.hs` é a versão final entregue.
