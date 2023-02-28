import System.IO (stdout, hSetBuffering, BufferMode(NoBuffering))

mult :: IO()
mult = do hSetBuffering stdout NoBuffering
          putStr "Digite o primeiro número: "
          x <- getLine
          putStr "Digite o segundo número: "
          y <- getLine
          putStr "Digite o terceiro número: "
          z <- getLine
          putStr "O resultado eh "
          putStrLn (show(multAux (read x) (read y) (read z)))

multAux :: Float -> Float -> Float -> Float
multAux n1 n2 n3 = n1*n2*n3


conv :: IO()
conv = do hSetBuffering stdout NoBuffering
          putStr "Digite a temperatura em Fahrenheit: "
          temp <- readLn
          putStr "Temperatura em Fahrenheit "
          putStrLn (show(temp))
          putStr "Temperatura em Celsius "
          putStrLn (show(celsius temp))

celsius :: Double -> Double
celsius temp = (5/9)*(temp - 32)

media :: IO()
media = do hSetBuffering stdout NoBuffering
           putStr "Digite a primeira nota: "
           nota1 <- getLine
           putStr "Digite a segunda nota: "
           nota2 <- getLine
           putStr "Digite a terceira nota: "
           nota3 <- getLine
           putStr "A situacao do aluno eh: "
           putStrLn (show(situ (read nota1) (read nota2) (read nota3)))

situ :: Float -> Float -> Float -> String
situ a b c
   | ((a+b+b)/3) < 3 = "Reprovado"
   | ((a+b+b)/3) >= 3 && ((a+b+b)/3) < 7 = "Exame Especial"
   | ((a+b+b)/3) >= 7 = "Aprovado"


arquivo :: IO()
arquivo = do hSetBuffering stdout NoBuffering
             putStrLn "Digite uma opcao: "
             putStrLn "1. Salva"
             putStrLn "2. Imprime"
             putStrLn "3. Sair"
             opcao <- readLn
             putStrLn ""
             case opcao of 
                1 -> do putStrLn "Digite uma frase"
                        frase <- getLine
                        salvar frase
                2 -> putStrLn "opcao 2"
                3 -> putStrLn "opcao sair"
                _ -> putStrLn "opcao invalida"
             if opcao /= 3 then arquivo else putStrLn "Sainda..."

salvar::String -> IO()
salvar frase = appendFile "arquivo.txt" frase

imprime::IO()
imprime = do conteudo <- readFile "arquivo.txt"
             putStrLn conteudo