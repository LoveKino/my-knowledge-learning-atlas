-- simple function definition in haskell
--
-- funName params = expression
--
-- 1. function can't start with uppercase letter
-- 2. a function can call each other without in particular order
-- 3. function without parameters, use it as a name
-- 4. use let defining variables in function
--     let definition
--         definition
--         ...
--     in expression
-- 5. if then else expression

ddchen'sWife = "kino"

square x = x * x
squareArea h w = square h + square w
circleArea r = let pi = 3.14
                in pi * square r
cutHalfBig x = if x > 100 then x / 2 else x

main = do
    print ddchen'sWife
    print $ circleArea 10
