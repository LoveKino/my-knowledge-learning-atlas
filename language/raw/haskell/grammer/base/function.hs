-- function definition
--
-- 1. pattern matching
--
--    you can match pattern on any kind of type
--    funName pattern1 = function definition1
--    funName pattern2 = function definition2
--    ...
--    funName patternx = function definitionx
--
--    when run funName, will match one by one
--
--    pattern:
--    (1) value like 1 2 3
--    (2) expand tuple (0, _, _)
--    (3) expand list
--        []  x:[]  x:xs
--
-- 2. guards
--      funName params
--          | condition1 = result1
--          | condition2 = result2
--          ...
--          | otherwise = last one
--
-- 3. case expression
--      case expression of condition1 -> result1
--                         condition2 -> result2
--                         condition3 -> result3
--

-- can use pattern to assign values
usePatternMatch a b c = let (x, y, _) = (a, b, c)
                        in (x, y)

luckyGuess :: (Integral a) => a -> [Char]
luckyGuess 1 = "Bad Guess"
luckyGuess 2 = "Good Guess"
luckyGuess _ = "Normal Guess"

vectorM :: (Num a, Eq a) => (a, a) -> (a, a) -> (a, a)
vectorM (0, y1) (_, y2) = (0, y1 + y2)
vectorM (_, y1) (0, y2) = (0, y1 + y2)
vectorM (x1, 0) (x2, _) = (x1 + x2, 0)
vectorM (x1, _) (x2, 0) = (x1 + x2, 0)
vectorM (x1, y1) (x2, y2) = (x1 + x2, y1 + y2)

simpleAn :: (Num a) => [a] -> a
simpleAn [] = 0
simpleAn (x:[]) = x * 2
simpleAn (x:xs) = x + simpleAn xs

-- bind a name in front of pattern. name@pattern
firstLetter :: String -> String
firstLetter all@(x:xs) = "The first letter of " ++ all ++ " is " ++ [x]

myHead :: [a] -> a
myHead [] = error "myHead parameter is an empty list"
myHead (x:xs) = x

myAbsolute :: (Num a, Ord a) => a -> a
myAbsolute x
    | x > 0     = x
    | otherwise = x * (-1)

-- you can use where to define names
-- let expression can not cross span guard, but where can
myMax :: (Ord a, Num a) => a -> a -> a
myMax x y
    | distance x y > bound = x
    | otherwise = y
    where distance c d = c - d
          bound = 0

-- case of
outputList :: [a] -> String
outputList xs = "Our list is " ++ case xs of [] -> "empty"
                                             [x] -> "singleton"
                                             xs -> "Normal"

-- high order function
--
-- 1. curry
--
-- 2. high order
--
-- 3. lambda
--
-- \ params -> function body
--

studyHighOrder = let max10 = max 10 -- partial fst parameter
                     elemList = (`elem` [1, 20, 30]) -- partial snd parameter
                     applyTwice :: (a -> a) -> a -> a
                     applyTwice f x = f (f x)
                     myZipWith :: (a -> b -> c) -> [a] -> [b] -> [c]
                     myZipWith _ [] _ = []
                     myZipWith _ _ [] = []
                     myZipWith f (x:xs) (y:ys) = f x y : myZipWith f xs ys
                 in max10 40 == 40 && elemList 1 == True && elemList 100 == False
                    && applyTwice (+3) 4 == 10
                    && myZipWith (+) [1, 2, 3] [0, 9, 8] == [1, 11, 11]
                    && map (+1) [3, 4, 5] == [4, 5, 6]
                    && filter (>10) [1, 3, 10, 22, 30] == [22, 30]
                    && map (\x -> x * 3 + 2) [1, 2, 3] == [5, 8, 11]

-- foldl foldr foldl1 foldr1
-- right folds work on infinite lists, whereas left ones do not.
--
-- foldl :: (a -> b -> a) -> a -> [b] -> a
-- foldr :: (a -> [b] -> [b]) -> [b] -> [a]
--
-- foldl1 and foldr1 just like the foldl and foldr, but do not need to provide start point.
-- they assume the first value is the first element of the list, and start fold at the next element

studyFold = let sum1 :: (Num a) => [a] -> a
                sum1 xs = foldl (\acc x -> acc + x) 0 xs
                sum2 = foldl (+) 0
                elem1 :: (Eq a) => a -> [a] -> Bool
                elem1 y = foldl (\acc x -> if x==y then True else acc) False
                map1 f = foldr (\x acc -> f x : acc) []
            in sum1 [1, 2, 3] == 6 && sum2 [1, 2, 3] == 6 
            && elem1 3 [1, 2, 3] == True && elem1 4 [1, 2, 3] == False
            && map1 (+1) [1, 2, 3] == [2, 3, 4]

-- function application $
-- ($) :: (a -> b) -> a -> b
-- f $ x = f x
--
-- $ function has the lowest precedence
--
-- eg: sum (map sqrt [1..130]) can be writen sum $ map sqrt [1..130]
studyFunctionApplication = sum (map sqrt [1..130]) == (sum $ map sqrt [1..130])
    && map ($ 4) [(4+), (10*), (^2), sqrt] == [8, 40, 16, 2]

-- function composition
-- .
-- (.) :: (b -> c) -> (a -> b) -> a -> c
-- f. g = \x -> f (g x)
--
studyComposition = map (negate . abs) [1, 2, 3] == [-1, -2, -3]
    && (sum . replicate 5 . max 10 $ 20) == 100

-- main as entrance
main = do
    print studyHighOrder
    print studyFold
    print studyFunctionApplication
    print studyComposition 
