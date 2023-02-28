import System.IO (stdout, hSetBuffering, BufferMode(NoBuffering))

operacao :: IO()
operacao = do hSetBuffering stdout NoBuffering
              putStrLn "------------------------------"
              putStrLn "Escolha uma das opcoes abaixo:"
              putStrLn "------------------------------"
              putStrLn "1 - Soma dos numeros"
              putStrLn "2 - Diferenca entre os numeros"
              putStrLn "3 - Produto dos numeros"
              putStrLn "4 - Divisao dos numeros"
              putStrLn "------------------------------"
              escolha <- readLn
              putStrLn ""
              putStrLn "Digite o primeiro numero:"
              x <- readLn
              putStrLn ""
              putStrLn "Digite o segundo numero:"
              y <- readLn
              case escolha of 
                1 -> putStrLn (show(soma (read x) (read x)))
                2 -> putStrLn (show (read x-y))
                3 -> putStrLn (show(prod (read x) (read x)))
                4 -> putStrLn (show(divi (read x) (read x)))
                _ -> putStrLn "opcao invalida"

soma:: Int->Int->Int
soma a b = a+b

prod:: Int->Int->Int
prod a b = a*b

divi::Int->Int->Int
divi a b = div a b