/*
GRUPO 7 Integrantes:
Anna Clara Rodrigues Peres
Carlos Eduardo da Silva Pechiori
Douglas Stuhler Pinheiro
Isabella Paula Simão
Paula Prado Carvalho
Vinícius Lucas Guimarães
*/

%Fatos
funcionario(101,andrew,3500). %Funcionário Andrew possui o código 101 e ganha 3500 reais.
funcionario(102,barbara,2000). %Funcionária Barbara possui o código 102 e ganha 2000 reais.
funcionario(103,cristal,3000). %Funcionária Cristal possui o código 103 e ganha 3000 reais.
funcionario(104,denis,2500). %Funcionário Denis possui o código 104 e ganha 2500 reais.
funcionario(105,esperanca,2000). %Funcionária Esperança possui o código 105 e ganha 2000 reais.
funcionario(106,fred,2500). %Funcionário Fred possui o código 106 e ganha 2500 reais.

dependentes(101,douglas). %Douglas é dependente de Andrew.
dependentes(101,anna). %Anna é dependente de Andrew.

dependentes(102,douglas). %Douglas é dependente de Barbara.
dependentes(102,anna). %Anna é dependente de Barbara.

dependentes(103,isabella). % Isabella é dependente de Cristal.
dependentes(103,paula). % Paula é dependente de Cristal.

dependentes(104,isabella). % Isabella é dependente de Denis.
dependentes(104,paula). % Paula é dependente de Denis.

dependentes(105,cadu). % Cadu é dependente de Esperança.
dependentes(105,vinicius). % Vinicius é dependente de Esperança.

dependentes(106,cadu). % Cadu é dependente de Fred.
dependentes(106,vinicius). % Vinicius é dependente de Fred.

% 4. consulta para listar os nomes e salários de 2 funcionários:
%funcionario(101,X,Y), funcionario(102,Q,W).

% 5. Regra para listar os dependentes de um determinado funcionário:
listar_dependentes(Funcionario) :-
    funcionario(Codigo, Funcionario, _),
    write('Dependentes de '), write(Funcionario), write(': '),
    findall(Dependente, dependentes(Codigo, Dependente), Dependentes),
    write(Dependentes).

% 6. consulta para mostrar o nome dos funcionários quando seu salário
% estiver dentro de uma faixa salarial (no exemplo, entre 2000 e 4500):
% forall((funcionario(Cod,Nome,Salario),Salario>=2000,Salario=<4500),writeln([Nome,Salario])).

% 7. consulta para mostrar somente o nome do funcionario de quem
% determinada pessoa é dependente (no exemplo, cadu):
% forall((funcionario(X,Y,_), dependentes(X,cadu)),writeln(Y)).

