-- Carlos Eduardo da Silva Pechiori

set search_path to locadora;

-- 1 - Obter a lista de clientes cujo telefone seja do Rio de Janeiro (isto é, com o código de área 21)
select c.* from cliente c where c.foneres like '(21)%' or c.fonecel like '(21)%';

-- 2 – Obter os empréstimos feitos no primeiro semestre de 2013, exibidos do mais recente para o mais antigo.
select d.* from emprestimo d where d.dataret between '2013-01-01' and '2013-06-30' order by d.dataret desc;

-- 3 - Listar clientes cujo nome (incluindo espaços) tenha mais de 15 caracteres.
select e.* from cliente e where length(e.nome) > 15;

-- 4 - Listar todos os nomes de pessoas no banco de dados incluindo atores, diretores de filmes e clientes.
select nome as nome_pessoa from cliente union select nomereal as nome_pessoa from ator union select direcao as nome_pessoa from filme;

-- 5 -Listar empréstimos cuja data de devolução está, pelo menos, 7 dias posterior em relação à data de retirada.
select f.* from emprestimo f where f.datadev >= f.dataret + interval  '7 days';

-- 6 - Obter uma listagem com filmes de aventura ou drama com duração superior a duas horas.
select g.* from filme g where (g.categoria like '%Aventura%' or g.categoria like '%Drama%') and g.duracao > 120;

-- 7 - Listar os 5 filmes mais antigos do acervo.
select h.* from filme h order by h.data_lancamento limit 5;

-- 8 – Obter o menor valor pago por um empréstimo
select min(valor_pg) as menor_valor_pago from emprestimo;

-- 9 – Obter o número de empréstimos realizados no ano de 2013.
select count(*) as numero_emprestimos from emprestimo where extract(year from dataret) = 2013;

-- 10 – Obter a média da diferença entre data de retorno e data de devolução dos empréstimos.
select avg(datadev - dataret) as media_dias from emprestimo where datadev is not null;
