-- type and type class for haskell
--
-- type makes safer code
--
-- 1. type reference
--
-- 2. check type in ghci, like ghci> :t 'a'
--
-- 3. use [a] stands for a type which's instance is a list and item type is a.
--    for tuple, every element has a type, like (a, b, c) stands for a type of tuple
--
-- 4. common type
--      Int           bounded, [2 ^ (a - 1) - 1, 2 ^ (a - 1)] 
--      Integer       not bounded, Int is more efficient.
--      Float
--      Double
--      Bool
--      Char
--
-- 5. type variable 
--
-- function has type variable are called polymorphic
--
-- 6. type class. It defines some behaviors. A type came from a type class, will have these behaviors.
-- (==) :: (Eq a) => a -> a -> Bool
-- every things before => called class constrant
--
-- 7. some basic type classes
--      Eq
--      Ord      (>) :: (Ord a) => a -> a -> Bool
--      Ordering    could be GT LT EQ
--      Show
--           show
--      Read
--           read
--      Enum
--      Bounded
--           minBound
--           maxBound
--      Num
--      Floating
--      Integral

removeBigLetter :: Char -> [Char] -> [Char]
removeBigLetter c xs = [ x | x <- xs, x <= c ]

studyTypeBasic = (read "5" :: Int) == 5
    && show 5 == "5"
    && (maxBound :: Bool) == True 
    && (minBound :: Bool) == False
    && show (20 :: Float) == "20.0"
    && fromIntegral(length [1..10]) + 3.3 == 13.3

main = do
    print studyTypeBasic
    print (maxBound :: Int)
    print (minBound :: Int)
    print (maxBound :: Char)
