-- list in haskell.
--
-- 1. list is homogenous. [a]
--
-- 2. string is a list of characters
--    "abc" == ['a', 'b', 'c']
--
-- 3. basic operations
--    ++        concat [1, 2] ++ [3, 4] = [1, 2, 3, 4]
--    :         1:2:[3] = [1, 2, 3]
--    !!        get item  [1, 2, 3] !! 2 = 3
--    == > <    compare by order
-- compare order is from first element to the last element of xs

studyListBasic = "123" == ['1', '2', '3']
    && [1, 2] ++ [3, 4] == [1, 2, 3, 4]
    && 1:2:3:[4] == [1, 2, 3, 4]
    && 1:[2, 3, 4] == [1, 2, 3, 4]
    && [5, 2, 8] !! 1 == 2
    && [2, 8, 3] == [2, 8, 3]
    && [8, 0, 0] > [4, 10, 10, 11]

-- 4.  more functions to handle list
-- (1) get elements from list: 
-- head tail last init take drop reverse replicate
-- (2) the state of list: length null elem
-- (3) reduce list: minimum maximum sum product
--
-- when use head tail last and init, be careful, do not act on empty list.

studyListHanlders = head [9, 0, 10] == 9
    && tail [9, 0, 10] == [0, 10]
    && last [2, 5, 8] == 8
    && init "12345" == "1234"
    && take 3 [0, 10, 4, 7] == [0, 10, 4]
    && take 0 [0, 10, 4, 7] == []
    && take 100 [0, 10, 4, 7] == [0, 10, 4, 7]
    && drop 2 [0, 10, 4, 7] == [4, 7]
    && drop 0 [0, 10, 4, 7] == [0, 10, 4, 7]
    && drop 100 [0, 10, 4, 7] == []
    && reverse [1, 2, 3] == [3, 2, 1]
    && replicate 3 10 == [10, 10, 10]
    && length [3, 8, 0] == 3
    && null [] == True
    && null [1] == False
    && minimum [2, 9, 10] == 2
    && maximum [2, 9, 10] == 10
    && sum [1, 2, 3] == 6
    && product [2, 3, 4] == 24
    && elem 5 [1, 2, 5] == True
    && elem 0 [1, 2, 5] == False
-- 
-- 5. ranges
--    you can assign the step for range
--    [2, 4..10] == [2, 4, 6, 8, 10]    start with 2, and next is 4, so step is 4-2=2
-- 6. infinite list: cycle, repeat

studyListRanges = [1..4] == [1, 2, 3, 4]
    && [1, 3..8] == [1, 3, 5, 7]
    && [4, 3..1] == [4, 3, 2, 1]
    && ['a'..'d'] == ['a', 'b', 'c', 'd']
    && take 5 (cycle [1, 2, 3]) == [1, 2, 3, 1, 2]
    && take 3 (repeat 10) == [10, 10, 10]

-- 7. list comprehension
-- list comprehension, like set comprehesion.
-- [ x*2 | x <- [1..10], 2*x < 12]
-- output function    x*2
-- varibale           x
-- input set          [1..10]
-- predicate          2*x < 12
--
-- when you not care about a varible, you can just use _

studyListComprehension = [x * 2 | x <- [1..10], mod x 3 == 1, x * 2 < 15] == [2, 8, 14]
    && [x * y | x <- [1..3], y <- [4..5]] == [4, 5, 8, 10, 12, 15]
    && sum [1 | _ <- [1..10]] == 10

main = do
    print studyListBasic
    print studyListHanlders
    print studyListRanges
    print studyListComprehension
