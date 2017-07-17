## notation

Bourbaki notations: 

N = {0, 1, 2, ...}, Z, Q, R,
C: complex numbers,
Fq: a finite field with q elements where q is a power of a prime number.
Fp = Z/pZ for p a prime number

m|n, n ϵ mZ

[*] denotes the equivalence class containing *.

ø

|S|

Let I and A be sets, a family of elements of A indexed by I, denoted:
(aι)ιϵI, is a function ι → aι: I → A. 

X ⊂ Y

X def= Y

X ≈ Y: X is isomorphic to Y

X ≃ Y: X and Y are canonically isomorphic

## basic definitions and results

- group

A group is a set G together with a binary operation

`(a, b) → a*b : G х G → G`

satisfying the following conditions:

G1: (associativity) for all a, b, c ϵ G,
    `(a*b)*c = a*(b*c)`

G2: (existence of a neutral element) there exists an element `e ϵ G` such that:
    `a*e=a=e*a` for all a ϵ G;

G3: (existence of inverses) for each a ϵ G, there exists an a' ϵ G, such that:
    `a*a' = e = a'*a`

We usually abbreviate (G, *) to G. Called e `neutral element`

(1) e is unique.

e' = e * e' = e

(2) if b*a=a*c=e, then b=c

b = b*e = b*(a*c) = (b*a)*c = e*c = c

Hence, the element a' is uniquely determined by a, denote it `-a`

(3) (a₁...ai)(ai+1...an) = (a₁...aj)(aj+1...an)

(4) The inverse of a₁a₂...an is `-an...-a₁`

(5) ab = ac ⇒ b = c, ba = ca ⇒ b = c

- isomorphic

Two groups, (G, *) and (G', *'), if there exists a one-to-one correspondence a <-> a', G <-> G', such that (a*b)' = a'*b' for all a,b ϵ G

- exponent

```
a^n = {
    aa...a                   n > 0 (n copies of a)
    e                        n = 0
    (a^-1)(a^-1)...(a^-1)    n < 0 (|n| copies of a^-1)
}
```

(1) a^m * a^n = a^(m+n), a^m^n = a^(mn), all m,n ϵ Z
