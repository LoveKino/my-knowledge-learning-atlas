-- export types in your module
-- module Shapes (
--     Shape (..),
--     surface) 

-- derive instances

-- define your own type
-- data TypeName = value constructor | value constuctor | ...
-- value constructor = Name Field Field ... value constructor are actually functions that ultimately return a value of a data type. Each field must be of some concrete type.

-- both the type name and the value constructors have to be capital cased
data MyPoint = Point Float Float

-- record syntax
data MyRecord = Record {
    recordType :: String,
    recordName :: String
}

-- data TypeName typeParam = type constructor | type constructor | ...
-- we could add a typeclass constraint in the data declaration.
-- type constructor only take one parameter
-- type constructors can be partially applied
data MyVector a = Vector a a deriving (Show, Eq)

-- deriving instance

data Day = Monday | Tuesday | Wednesday | Thursday | Friday | Saturday | Sunday deriving (Eq, Ord, Show, Read, Bounded, Enum)

-- type synonyms
-- type Name = pattern
type MyInts = [Int]
type KVs a b = [(a, b)]


-- recursive data structure
data Nat = Zero | Succ Nat

data Tree a = EmptyTree | Node a (Tree a) (Tree a) deriving (Show, Read, Eq)

-- typeclass
-- typeclasses like interfaces, define some behaviors.
-- class ClassName var where
--           function1
--           function2
--           ...
--
-- instance ClassName TypeName where
--            patterns
-- class Eq a where
--     (==) :: a -> a -> Bool
--     (/=) :: a -> a -> Bool
--     x == y = not (x /= y)
--     x /= y = not (x == y)

data TrafficLight = Red | Yellow | Green
instance Eq TrafficLight where
    Red == Red = True
    Green == Green = True
    Yellow == Yellow = True
    _ == _ = False
instance Show TrafficLight where
    show Red = "Red Light"
    show Yellow = "Yellow light"
    show Green = "Green light"

class YesNo a where
    yesno :: a -> Bool

instance YesNo Int where
    yesno 0 = False
    yesno _ = True

instance YesNo [a] where
    yesno [] = False
    yesno _ = True

instance YesNo Bool where
    yesno = id

-- Functor
-- class Functor f where
--      fmap :: (a -> b) -> f a -> f b
-- intance Functor [] where
--      fmap = map
-- instance Functor Maybe where
--      fmap f (Just x) = Just (f x)
--      fmap f Nothing = Nothing

-- use types
distance :: MyPoint -> MyPoint -> Float
distance (Point x1 y1) (Point x2 y2) = sqrt $ (x1 - x2)^2 + (y1 - y2)^2
                 
record = Record "simpleType" "simpleName"
record2 = Record {recordType="simpleType", recordName="simpleName"}

addVector :: (Num v) => MyVector v -> MyVector v -> MyVector v
addVector (Vector x1 y1) (Vector x2 y2) = Vector (x1 + x2) (y1 + y2)

repeatPair :: MyInts -> MyInts -> KVs Int Int
repeatPair [] _ = []
repeatPair _ [] = []
repeatPair (x:xs) (y:ys) = (x, y): (repeatPair xs ys)

singleton :: a -> Tree a
singleton x = Node x EmptyTree EmptyTree
treeInsert :: (Ord a) => a -> Tree a -> Tree a
treeInsert x EmptyTree = singleton x
treeInsert x (Node a left right)
    | x == a   = Node x left right
    | x < a    = Node a (treeInsert x left) right
    | x > a    = Node a left (treeInsert x right)

-- tests
studyType = distance (Point 1 2) (Point 4 6) == 5
    && recordType record == "simpleType" && recordName record == "simpleName"
    && addVector (Vector 1 2) (Vector 3 4) == (Vector 4 6)
    && Saturday == Saturday && Saturday > Friday && compare Monday Tuesday == LT
    && repeatPair [1, 2] [3, 4] == [(1, 3), (2, 4)]
    && yesno (0::Int) == False && yesno (1::Int) == True && yesno [] == False && yesno [1] == True
    && fmap (+1) [1..4] == [2..5] && fmap (*2) Nothing == Nothing
