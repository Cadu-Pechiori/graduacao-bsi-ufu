imprimeNVezes::Int->IO()
imprimeNVezes n
   | n == 1 = putStrLn "Frase \n"
   | n > 1 = do
                putStrLn "Frase \n"
                imprimeNVezes (n-1)

eLogico :: Bool -> Bool -> Bool
eLogico x y
   | x == True && y == True = True
   | otherwise = False

eLogico2 :: Bool -> Bool -> Bool
eLogico2 a b
   | a == True = b
   | a == False = False

fat :: Float->Float
fat h
   | h == 0 = 1
   | otherwise = h*fat(h-1)

comb2 :: (Float, Float) -> Float
comb2 (n, k) = (fat n)/((fat k)*(fat n-k))

comb :: (Float, Float) -> Float
comb (n, k)
   | k == 1 = n
   | k == n = 1
   | k > 1 && k < n = comb(n-1,k-1)+comb(n-1,k)


