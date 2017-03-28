-- tuple (a, b, c)
--
-- 1. elements of tuple do not have to be homogenous
--    (1, 'a', [2, 3])
--
-- 2. [(1, 2), (2, 3, 4)] will report an error, but [[1, 2], [2, 3, 4]] won't
--
-- 3. [(1, 2), (1, 'a')] will report an error
--
-- 4. use tuple when you know how many elements you have in advance
--
-- 5. you can compare tuples if
-- (i) their components can be compared 
-- (ii) they have the same length of components
--
-- some operations for tuple: fst snd zip

studyTuple = fst (1, 2) == 1 
    && snd (1, 2) == 2-- only works for (a, b)
    && zip [1, 2, 3] ['a', 'b', 'c', 'd'] == [(1, 'a'), (2, 'b'), (3, 'c')]
    && (1, 'a') == (1, 'a') 
    && (10, 'd') > (5, 'd')

-- for example, we solve a problem like this
-- a belongs to [1..10], b belong to [4..15], c belongs to [8..30],
-- get all triangles construct from (a, b, c)
allTriangles = [(a, b, c) | a <- [1..10], b <- [4..15], c <- [8..30], a < b + c, b < a + c, c < a + b]

main = do 
    print studyTuple
    print allTriangles
