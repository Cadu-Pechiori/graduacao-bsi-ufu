# Histórias de usuário — PDV (ponto de venda)

> Convertido em 2026 a partir do original `Historias - Processo de Desenvolvimento de Software.docx`.
> As histórias foram escritas pelo Product Owner do grupo, Otávio Gondim, e viraram o backlog inicial no Jira.

## Operador de caixa

1. **Realizar venda (checkout)** — Como operador de caixa, eu quero adicionar produtos ao carrinho de vendas via código de barras ou código interno do produto, para que o atendimento seja rápido.
2. **Consulta rápida (busca)** — Como operador de caixa, eu quero buscar um produto pelo nome ou descrição, para que eu consiga vender itens cuja etiqueta está ilegível.
3. **Processar pagamento e troco** — Como operador de caixa, eu quero informar o valor recebido e ver o troco calculado na tela, se houver, para que eu não cometa erros matemáticos ao devolver o dinheiro.
4. **Remover item da lista (correção simples)** — Como operador de caixa, eu quero remover um item específico do carrinho de vendas atual antes de finalizar a venda, para que eu possa corrigir erros de registro.
5. **Abrir e fechar caixa (fluxo diário)** — Como operador de caixa, eu quero informar o saldo inicial e, ao final do dia, visualizar o total vendido, para que eu possa conferir se o dinheiro na gaveta bate com o sistema.

## Administrador

6. **Manter produtos (CRUD de produtos)** — Como administrador, eu quero cadastrar, editar e excluir produtos (nome, preço de venda, código de barras e código interno), para que o catálogo de vendas esteja sempre atualizado.
7. **Controle de estoque (entrada de mercadoria)** — Como administrador, eu quero dar entrada na quantidade de estoque dos produtos, para que o sistema saiba exatamente quantos itens temos disponíveis. (Nota: o caixa só dá baixa; o administrador dá entrada.)
8. **Cancelamento de venda (estorno)** — Como administrador, eu quero cancelar uma venda já finalizada (estorno), para que possamos resolver problemas de devolução ou desistência do cliente após o pagamento.
9. **Relatórios de vendas** (se houvesse tempo) — Como administrador, eu quero visualizar um relatório de vendas por período (dia/mês), para que eu saiba qual foi o faturamento e o lucro da loja.
10. **Gerenciar usuários** — Como administrador, eu quero cadastrar, editar e remover operadores de caixa e suas senhas, para que novos funcionários possam acessar o sistema.
