import System.IO
import Data.Char
import Data.List

type Codigo = Int
type Nome = String
type Preco = Float
type Produto = (Codigo, Nome, Preco)

tabelaProdutos :: [Produto]
tabelaProdutos = [(001, "Chocolate", 5.25)
                , (002, "Biscoito", 10.10)
                , (003, "Laranja", 4.60)
                , (004, "Sabao", 2.10)
                , (005, "Batata Chips", 6.90)
                , (006, "Doritos", 8.90)]

isCodigo::Codigo->Produto->Bool
isCodigo a1 (a2,b,c) =
    if (a1 == a2) then True else False

getPreco::Produto->Preco
getPreco (a,b,c) =
    c

getNome::Produto->Nome
getNome (a,b,c) =
    b

buscaPrecoPorCodigo ::Codigo -> Preco
buscaPrecoPorCodigo c =
    getPreco (head (filter (isCodigo c) tabelaProdutos))

buscaNomePorCodigo :: Codigo -> Nome
buscaNomePorCodigo b =
    getNome (head (filter (isCodigo b) tabelaProdutos))

calculaPrecos :: [Int] -> Preco
calculaPrecos [a1,a2,a3] =
    foldr(+) 0 (map buscaPrecoPorCodigo [a1,a2,a3])

formataStrProduto :: Codigo -> String
formataStrProduto a = b ++ (replicate (30 - (length b + length precoProduto)) '.') ++ precoProduto ++ "\n"
    where b = take 30 (buscaNomePorCodigo a)
          precoProduto = show (buscaPrecoPorCodigo a)

geraNotaFiscal :: [Codigo] -> IO ()
geraNotaFiscal codigos = do
    let produtos = map formataStrProduto codigos
        precoTotal = calculaPrecos codigos
    writeFile "notaFiscal.txt" (concat produtos ++ "Total: " ++  show precoTotal )



--geraNotaFiscal :: [Int] -> IO()
--geraNotaFiscal ls = do
--    let coisa = (foldr(++) "" (map formataStrProduto ls))
--     in appendFile "notateste.txt" coisa
