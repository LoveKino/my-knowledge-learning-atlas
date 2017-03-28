-- side effect: when a function changes states

-- compile
-- $ ghc --make filename
-- ./filename
-- or you can just
-- $ runhaskell filename.hs

-- putStrLn :: String -> IO ()
-- getLine :: IO String
-- use do syntax to glue together several I/O actions into one.
-- in a do block, the last action can not be  bound to a name
-- get the value out of an IO action, name <- IO action
-- return in haskell, will have a IO thing
-- TODO putStr putChar print getChar when sequence forever forM
-- getContents interact openFile ...

import Data.Char

main = do
    putStrLn "Hello, what's your name?"
    name <- getLine
    if null name
        then return ()
        else do
            let bigName = map toUpper name
            putStrLn ("Hey " ++ bigName ++ ", you rock!")
