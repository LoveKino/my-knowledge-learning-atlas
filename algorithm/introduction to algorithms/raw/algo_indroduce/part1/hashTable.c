/**
 * Hash Tables
 *
 * dictionary:
 * 1. INSERT
 * 2. SEARCH
 * 3. DELETE
 *
 * generally
 * search
 * worest cast: Ø(n)
 * practice: Ø(1)
 * average: O(1)
 *
 * Instead of using the key as an array index directly, the array index is computed from the key.
 *
 * collision
 */

/**
 * Direct-address tables
 *
 * key's universal set U = {0, 1, ..., m-1}
 *
 * direct-address table T[0..m-1], each position (slot) corresponds to a key in the universe U.
 *
 * search, delete and insert: O(1)
 *
 * node (k, v)
 *
 * problem:
 * the size of U can be really big
 */
int directAddressSearch(int *T, int k) {
    return T[k];
}

void directAddressInsert(int *T, int k, int x) {
    T[k] = x;
}

void directAddressDelete(int *T, int k) {
    T[k] = -65535; // used as nil
}

/**
 *
 * U: the set of keys
 * T: hash table {0, 1, .., m - 1}
 *
 * hash function h:
 *
 * h: U -> T
 * 
 * key k is stored in slot h(k)
 * k hashed to slot h(k)
 * h(k) is the hash value of key k
 * 
 *
 * collision
 *      k1 ≠ k2, h(k1) = h(k2)
 *
 * simple way to solve the collision: chaining. For slot j,
 * (1) point to the head of linked list which contain all k, satisfy h(k) = j
 * (2) point to nil
 *
 *
 * load factor
 *
 * hash table T, with m slots that stores n elements, load factor a = n / m
 *
 * simple uniform hashing: any given element is likely to hash into any of the m slots, independently of where any other element has hashed to.
 *
 *
 * the division method
 * h(k) = k mod m
 * when using division method, we usually avoid certain values of m.
 * for example m = 2 ^ p
 *
 * a prime not too close to an exact power of 2 is often a good choice for m.
 *
 *
 *
 * the multiplication method
 * h(k) = floor(m ( kA mod 1)), 0 < A < 1
 *
 * kA mod 1 means kA = kA - floor(kA)
 *
 * usually, m = 2 ^ p
 * some suggestion A = (sqrt(5) - 1) / 2 = 0.6180339887
 *
 *
 * universal hashing: chose the hash function randomly in a way that is independent of the keys that are actually going to stored
 *
 */ 

/**
 * open addressing (differ chaining)
 * all elements occupy the hash table itself.
 * means a in T, a is nil or element
 *
 * the hash table can "fill up" so that no further insertions can be made.
 *
 * h: U * {0, 1, ..., m-1} -> {0, 1, ..., m-1}
 * for every k, the probe sequence <(h(k, 0), h(k, 1), ..., h(k, m-1)>
 *
 * TODO
 * Linear probing
 * h(k, i) = (h`(k) + i) mod m
 *
 * Quadratic probing
 * h(k, i) = (h`(k) + c1 * i + c2 * i ^ 2)
 *
 * Double hashing
 * h(k, i) = (h1(k) + i * h2(k)) mod m
 */

/**
 * perfect hashing
 *
 * 1. the set of keys is static
 *
 * once the keys are stored in the table, the set of keys never changes.
 *
 * TODO
 */

int main(void) {
}
