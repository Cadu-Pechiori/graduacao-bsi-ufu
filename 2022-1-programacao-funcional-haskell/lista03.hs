import System.IO (stdout, hSetBuffering, BufferMode(NoBuffering))

palindromo::IO()
palindromo = do hSetBuffering stdout NoBuffering
                putStrLn "Digite uma frase"
                frase <- getLine
                if (reverse frase == frase)
                    then putStrLn "Eh um palindromo"
                        else putStrLn "Nao eh palindromo"
                putStrLn ""