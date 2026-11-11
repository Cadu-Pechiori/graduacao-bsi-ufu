/*
GRUPO 7 Integrantes:
Anna Clara Rodrigues Peres
Carlos Eduardo da Silva Pechiori
Douglas Stuhler Pinheiro
Isabella Paula Simão
Paula Prado Carvalho
Vinícius Lucas Guimarães
*/

/*
 Nomes Escolhidos para as pessoas:
 A - Andrew
 B - Barbara
 C - Cristal
 D - Denis
 E - Esperanca
 F - Fred
 G - Gesuis
 */

feminino(cristal).
feminino(barbara).
feminino(esperanca).
%acima declaramos os fatos "feminino"

masculino(andrew).
masculino(denis).
masculino(fred).
masculino(gesuis).
%acima declaramos os fatos "masculino"

pai(andrew,gesuis).
pai(andrew,cristal).
pai(andrew,denis).
pai(denis,fred).
%acima declaramos os fatos "pai"

mae(barbara,cristal).
mae(barbara,denis).
mae(esperanca,fred).
%acima declaramos os fatos "mae"

homem(X) :- masculino(X),!. %procura um homem e logo após, faz o corte.

homens(X,Y):-masculino(X),!,pai(Y,_),X\=Y. %procura um homem, faz o corte e logo após procura um pai que seja diferente da solução apresentada anteriormente, como A e D possuem a característica "pai" em comum, a resposta serão os dois homens.

mulher(X) :- feminino(X),!. %procura uma mulher e logo após, faz o corte.

pai(X) :- pai(X,_),!. %procura um pai e logo após, faz o corte.

mae(X) :- mae(X,_),!. %procura uma mulher e logo após, faz o corte.



















