--ex1a-----------------------------
nandif :: Bool -> Bool -> Bool
nandif a b =
    if
        a == False || b == False
    then
        True
    else
        False

nandguard :: Bool -> Bool -> Bool
nandguard a b
    | a == False || b == False = True
    | otherwise = False

nandpadrao :: Bool -> Bool -> Bool
nandpadrao True True = False
nandpadrao _ False = True

--ex2------------------------------

e_logico :: Bool -> Bool -> Bool
e_logico a b =
    if
        a == True && b == True
    then
        True
    else
        False

--ex3------------------------------

e_logico2 :: Bool -> Bool -> Bool
e_logico2 a b =
    if
        a == True
    then
        b
    else
        False

--ex4------------------------------

mdc :: Float -> Float -> Float
mdc x y
    | x == y = x
    | x > y = mdc (x-y) y
    | x < y = mdc (y-x) x

mmc :: Float -> Float -> Float
mmc x y = (x*y)/(mdc x y)

--ex5------------------------------

mdc3 :: Float -> Float -> Float -> Float
mdc3 x y z = mdc (mdc x y) z

--ex6------------------------------

soma :: Int -> Int
soma n
    | n == 0 = 0
    | n > 0 = n + soma(n-1)

--ex7------------------------------

somaComLimite :: Int -> Int -> Int
somaComLimite x y
    | y == x = x
    | y > x = y + somaComLimite x (y-1)


--ex8------------------------------

multiplos :: Int -> Int -> Int -> IO()
multiplos x y z
   | x == y = if mod x z == 0
              then putStrLn (show x)
              else putStr ""
   | x < y = do
               if mod x z == 0
               then putStrLn (show x)
               else putStr ""
               multiplos (x+1) y z
   | x > y = multiplos y x z



--ex9------------------------------

comb :: (Int,Int) -> Int
comb (n,k) 
   | k == 1 = n
   | k == n = 1
   | k > 1 && k < n = comb (n-1,k-1) + comb (n-1,k)

--ex10-----------------------------

fatorial :: Float -> Float
fatorial n
  | n == 0 = 1
  | n > 0 = n * fatorial (n-1)

expo :: Float -> Float -> Float
expo x n 
  | n == 0 = 1
  | n > 0 = (x**n)/(fatorial n) + expo x (n-1)

--ex11-----------------------------

conta_digitos :: Float -> Float
conta_digitos n
  | n/10 < 1 = 1
  | n/10 > 0 = 1 + conta_digitos (n/10)

--ex12-----------------------------

soma_digitos :: Int -> Int
soma_digitos n
  | div n 10 == 0 = n
  | otherwise = mod n 10 + soma_digitos (div n 10)

--ex13-----------------------------

potencia :: (Int,Int) -> Int
potencia (b,e)
    | e == 1 = b
    | e > 1 = b*potencia(b,(e-1))

--ex14-----------------------------

ackermann :: (Int,Int) -> Int
ackermann (m,n)
    | m == 0 = n+1
    | m > 0 && n == 0 = ackermann(m-1,1)
    | m > 0 && n > 0 = ackermann (m-1,ackermann(m,n-1))

--ex15-----------------------------

--    | x >= 1 = if (x - y*y < (10**(-6)) || y*y < (10**(-6)))
--               then (1+x)/2 else (1+y)/2
--    | x < 1
--    | x < 0 == 0