igualounao:: (Int, Int, Int) -> Int
igualounao (a, b, c)
   | a == b && b == c = 3
   | a == b || b == c || a == c = 2
   | a /= b && b /= c && a /= c = 0


igualounao2:: (Int, Int, Int) -> IO()
igualounao2 (a, b, c)
   | a == b && b == c = putStrLn "3"
   | a == b || b == c || a == c = putStrLn "2"
   | a /= b && b /= c && a /= c = putStrLn "0"




