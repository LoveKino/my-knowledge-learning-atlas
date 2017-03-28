#include <stdio.h>

/**
 * matrix multuplication
 * A = (aij) B = (bij)
 * C = A·B
 * cij = sum (aik · bkj)
 */

/**
 * Strassen's algorithm
 * 
 * A = A11 A12
 *     A21 A22
 *
 * B = B11 B12
 *     B21 B22
 *
 * C = C11 C12
 *     C21 C22
 * 
 * C = A · B,
 *
 * C11 = A11 · B11 + A12 · B21
 * C12 = A11 · B12 + A12 · B22
 * C21 = A21 · B11 + A22 · B21
 * C22 = A21 · B12 + A22 · B22
 *
 * S1 = B12 - B22
 * S2 = A11 + A12
 * S3 = A21 + A22
 * S4 = B21 - B11
 * S5 = A11 + A22
 * S6 = B11 + B22
 * S7 = A12 - A22
 * S8 = B21 + B22
 * S9 = A11 - A21
 * S10 = B11 + B12
 *
 * P1 = A11 · S1
 * P2 = S2 · B22
 * P3 = S3 · B11
 * P4 = A22 · S4
 * P5 = S5 · S6
 * P6 = S7 · S8
 * P7 = S9 · S10
 *
 * C11 = P5 + P4 - P2 + P6
 * C12 = P1 + P2
 * C21 = P3 + P4
 * C22 = P5 + P1 - P3 - P7
 */

int main (void) {
}
