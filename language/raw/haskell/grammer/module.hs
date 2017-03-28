-- import modules first befor using them
-- in ghci, import module by typing 
--      ghci> :m + module1 module2 module3
-- import module, eg: import Data.list
-- just import some functions, eg: import Data.list (nub, sort)
-- import but some functions, eg: import Data.List hiding (nub)

-- import module with name, eg: import qualified Data.List, then refer function like Data.List.nub
-- import module with short name, eg: import qualified Data.List as M, then refer function like M.nub

import Data.List

numUniques :: (Eq a) => [a] -> Int 
-- nub is a function defined in Data.list
numUniques = length . nub

-- Data.List module
-- intersperse
-- intercalate
-- transpose
-- iterate takes a function and a starting value
--      iterate f start
--      get a infinite list, satisfy:
--      a(0) = start
--      a(n) = f(a(n-1)), n ≥ 1
-- takeWhile: once predicate is false, drop the rest of list 
-- dropWhile: once predicate is true, return this rest of list
-- break p == span (not . p)
--
-- find :: (a -> Bool) -> [a] -> Maybe a
-- a value of the type Maybe can contain either no elements or one element

let studyDataList = intersperse '.' "abc" == "a.b.c" 
    && intercalate " " ["hello", "world"] == "hello world"
    && transpose [[1, 2, 3], [4, 5, 6], [7, 8, 9]] == [[1, 4, 7], [2, 5, 8], [3, 6, 9]]
    && map sum & transpose [[1, 3, 4], [5, 7, 9]] = [[6, 10, 13]]
    && concat [[1, 2, 3], [4, 5, 6]] == [1, 2, 3 ,4, 5, 6]
    && concatMap (replicate 2) [1..3] == [1, 1, 2, 2, 3, 3]
    && and $ map (>4) [5, 6, 7, 8] == True
    && and $ map (<12).(*3) [3, 4, 6] == False
    && any (==4) [2, 3, 5, 4] == True
    && all (>4) [2, 4, 5] == False
    && take 3 $ iterate (*2) 2 == [2, 4, 8]
    && splitAt 2 "helloworld" == ("he", "lloworld")
    && splitAt (-3) "helloworld" == ("", "helloworld")
    && takeWhile (/=' ') "This is me" == "This"
    && dropWhile (/= ' ') "This is me" == "is me"
    && span (/= ' ') "This is me" == ("This", " is me") == break (== ' ') "This is me"
    && soirt [8, 5, 3, 100, 30] == [3, 5, 8, 30, 100]
    && group [1, 1, 1, 2, 2, 1] == [[1, 1, 1], [2, 2], [1]]
    && inits "hello" == ["", "h", "he", "hel", "hell", "hello"]
    && tails "hello" == ["hello", "ello", "llo", "lo", "o", ""]
    && isInfixOf "today" "regard today as last day" == True
    && isPrefixOf "start" "start ok" == True
    && isSuffixOf "last" "get last" == True
    && partition (>3) [1, 2, 4, 5, 7] == ([4, 5, 7], [1, 2])
    && find (>3) [1, 2, 4, 5, 7] == 4
    && elemIndex 4 [1, 2, 4, 5, 7] == 2
    && elemIndices ' ' "Find the space" == [4, 8]
    && lines "line 1\nline 2" == ["line1", "line2"]
    && unlines ["line1", "line2"] == "line1\nline2"
    && words "split words" == ["split", "words"]
    && unwords ["split", "words"] == "split words"
    && nub [1, 1, 2, 2, 3, 1, 4, 2, 5, 5] == [1, 2, 3, 4, 5]
    && delete 'h' "hello there" == "ello there"
    && [1..10] \\ [2, 5, 9] == [1, 3, 4, 6, 7, 8, 10]
    && union [1..7] [5..10] == [1..10]
    && intersect [1..7] [5..10] == [5, 6, 7]
    && insert 4 [1, 2, 3, 5] == [1, 2, 3, 4, 5]
