-- Consultas SQL (PostgreSQL) sobre o esquema "locadora" usado na disciplina de BD1.
-- Extraídas em 2026 do PDF de respostas (consultas-locadora/BD1 - consultas.pdf).
-- O esquema e os dados da locadora foram fornecidos pelo professor e não estão neste repositório.

SET search_path TO locadora;

-- 1)
SELECT * FROM filme ORDER BY titulo_pt;

-- 2)
SELECT * FROM locadora.filme WHERE duracao > 120 ORDER BY data_lancamento DESC;

-- 3)
SELECT * FROM filme WHERE categoria LIKE '%Drama%' ORDER BY duracao;

-- 4)
SELECT *
FROM cliente
WHERE foneres LIKE '(21%' OR fonecel LIKE '(21%';

-- 5)
SELECT nomeartistico
FROM ator
union
select direcao
from filme
ORDER BY nomeartistico;

-- 6)
SELECT COUNT(*)
FROM ator
WHERE nacionalidade NOT IN ('USA', 'Canadá');

-- 7)
SELECT AVG(duracao) AS duracao_media
FROM filme
WHERE classificacao IN (
    SELECT cod
    FROM classificacao
    WHERE preco > 8);

-- 8)
SELECT *,
       (SELECT c.nome
        FROM cliente c
        WHERE c.numcliente = e.cliente)
FROM emprestimo e
ORDER BY e.dataret;

-- 9)
SELECT
    a.nomeartistico,
    f.direcao
FROM
    ator a,
    filme f
WHERE
    a.cod IN (SELECT codator FROM estrela WHERE numfilme = f.numfilme)
GROUP BY
    a.nomeartistico, f.direcao
ORDER BY
    f.direcao, a.nomeartistico;

-- 10)
SELECT
    c.nome,
    f.direcao
FROM
    cliente c,
    emprestimo e,
    filme f
WHERE
    c.numcliente = e.cliente
    AND e.numfilme = f.numfilme
ORDER BY
    c.nome,
    f.direcao;

-- 11)
SELECT
    c.nome AS nome_cliente,
    a.nomeartistico AS nome_ator
FROM
    cliente c,
    ator a
WHERE
    a.cod IN (
        SELECT e.codator
        FROM estrela e
        WHERE e.numfilme IN (
            SELECT m.numfilme
            FROM midia m
            WHERE m.numfilme IN (
                SELECT em.numfilme
                FROM emprestimo em
                WHERE em.cliente = c.numcliente)))
AND EXISTS (
    SELECT 1
    FROM filme f
    WHERE f.numfilme IN (
        SELECT e.numfilme
        FROM estrela e
        WHERE e.codator = a.cod)
    AND f.data_lancamento <= CURRENT_DATE - INTERVAL '40 years')
ORDER BY
    c.nome, a.nomeartistico;

-- 12)
SELECT c.numcliente,
       c.nome,
       (SELECT SUM(duracao)
        FROM filme
        WHERE numfilme IN
            (SELECT numfilme
            FROM midia
            WHERE (numfilme, numero, tipo) IN
                (SELECT numfilme, numero, tipo
                FROM emprestimo
                WHERE cliente = c.numcliente))) AS total_minutos
FROM cliente c
WHERE EXISTS (SELECT 1
    FROM emprestimo
    WHERE cliente = c.numcliente);

-- 13)
SELECT
    a.cod,
    a.nomeartistico,
    (SELECT COUNT(*)
     FROM emprestimo e
     WHERE e.numfilme IN
         (SELECT numfilme
         FROM estrela
         WHERE codator = a.cod)) AS qtd_emprestimos
FROM
    ator a
WHERE
    (SELECT COUNT(*)
     FROM emprestimo e
     WHERE e.numfilme IN
         (SELECT numfilme
         FROM estrela
         WHERE codator = a.cod)) > 1
order by qtd_emprestimos, a.nomeartistico;

-- 14)
SELECT
    c1.numcliente AS num_cliente,
    c1.nome AS nome_cliente,
    (SELECT nome
     FROM cliente
     WHERE numcliente = c1.numClienteIndicador) AS nome_indicador
FROM
    cliente c1
WHERE
    c1.numClienteIndicador IS NOT NULL;
