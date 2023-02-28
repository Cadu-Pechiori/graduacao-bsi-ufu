main :: IO()
main = do
         putStrLn "Classe Eleitoral"
         putStrLn "----------------"
         putStrLn "Digite a idade"
         idade <- readLn
         if idade < 16
         then putStrLn "nao eleitor"
         else if idade >= 18 && idade < 65
         then putStrLn "eleitor obrigatorio"
         else if (idade > 16 && idade < 18) || idade >=65
         then putStrLn "eleitor facultativo"
         putStrLn ""