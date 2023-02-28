quoc :: Float -> Float -> Float
quoc x y
  | x < y = 0
  | otherwise = 1 + quoc ( x - y ) y

rest :: Float -> Float -> Float
rest x y
  | x < y = x
  | otherwise = rest ( x - y ) y 

pot :: Float -> Float -> Float
pot x y
  | y == 0 = 1
  | otherwise = x * pot x (y-1)

nandif :: Bool -> Bool -> Bool
nandif p q = if (p || q == False)
               then True
                 else False

nandguar :: Bool -> Bool -> Bool
nandguar p q
  | p == True && q == True = False
  | otherwise = True


xorCor :: Bool -> Bool -> Bool
xorCor True False - True
xorCor False True - True
xorCor _ _ - False
