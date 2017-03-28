## Representing and Manipulating Information

Every byte of memory is identified by a unique number, known as its address, and the set of all possible addresses is known as the virtual address space.

The value of a pointer in C is the virtual address of the first byte of some block of storage.

Every computer has a word size, indicating the nominal size of integer and pointer data.

n-bit word size, the virtual addresses can range from 0 to 2^n - 1.

big endian(Sun)  little endian(linux, NT, Alpha ...)
0x01234567
               0x100   0x101   0x102   0x103
Big endian:     01      23      45      67
little endian:  67      45      23      01 

A string in C is encoded by an array of characters terminated by the null (having value 0) character.

`man ascii`
