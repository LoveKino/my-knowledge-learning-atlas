RAM

input size

running time

worse-case and average-case analysis

## The divide-and-conquer approach

recursive problems

1. Divide the problem into a number of subproblems that are smaller instances of the same problem

2. Conquer the subproblems by solving them recursively. If the subproblem sizes are small enough, just solve them in a straightforward manner.

3. Combine the solutions.

recursion tree
recurrence

### master method

T(n) = aT(n/b) + f(n), a ≥ 1, b > 1

(i) if f(n) = O(n ^ log(b, a - c)), for some constant c > 0, T(n) = Ø(n ^ log(b, a))

(ii) if f(n) = Ø(n ^ log(b, a)), then T(n) = Ø(lgn · n ^ log(b, a))

(iii) if f(n) =

## probabilistic analysis

distribution of inputs

indicator random variable I{A}
I{A} = 1 if A occurs
     = 0 if A does not occur

## decision tree model

## dynamic set

key

satellite data

### dictionary

1. insert elements into

2. delete elements from 

3. test membership in a set

### operations on the dynamic set

queries + modifying operations
