duas_vezes:: (a->a)->a->a
duas_vezes func a = func (func a)

dobro x = 2*x

sq::Int->Int
sq n
  | n == 0 = 0
  | n > 0 = n*n + sq(n-1)

sq2::Int->Int
sq2 n = foldr (+) 0 (map (^2) [1..n])

sqp ls = foldr (+) 0 (map (^3) (filter even ls))



