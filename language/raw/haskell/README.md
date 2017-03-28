# study_haskell

Study haskell little by little.

# preparation

- down load ghc

https://www.haskell.org/downloads

- run ghc

```
// start ghci
$ ghci

ghci> :set prompt "ghci> "

// quit ghci

ghci> :quit

// exec extenal cmd, for example :!ls
ghci> :![cmd] 

// load file
ghci> :l filepath

// reload file
ghci> :r

// just run hs with main method
$ runhaskell filename.hs

```

- compile haskell script

```
$ ghc --make filename
```
