#include <stdio.h>
#include <math.h>

void swap(int *A, int i, int j) {
    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
}

void printArray(int *A, int len) {
   for(int i = 0; i < len; i++) {
       printf("%d ", A[i]);
   }
}

/**
 * ith order statistic of a set of n elements is the ith smallest element.
 *
 * input: A[0..n-1] and i
 * output: x in A and is larger than exactly i - 1 other elements of A
 */

int partition(int * A, int p, int r) {
    int key = A[r];
    int i = p - 1;
    for(int j = p; j <= r - 1; j++) {
        if(A[j] <= key) {
            i++;
            swap(A, i, j);
        }
    }
    swap(A, i + 1, r);
    return i + 1;
}

/**
 * partition select
 *
 * TODO fix the bug
 */
int parttionSelect(int * A, int p, int r, int i) {
    if(p >= r) {
        return A[p];
    }
    int q = partition(A, p, r);
    int k = q - p + 1;
    if (i == k) {
        return A[i - 1];
    } else if(i < k) {
        return parttionSelect(A, p, q - 1, i);
    } else {
        return parttionSelect(A, q + 1, r, i - 1 - k);
    }
}

/**
 * worest-case linear time selection
 * A[0..n-1]
 * 1. divide A into floor(n / 5) groups of 5 elements
 * 2. find the median of each of the groups and then picking the median from sorted list of group elements.
 * 3. recursively find the median x of the floor(n / 5) medians found in step 2.
 * 4. partion A by x
 * 
 * T(n) ≤ O(1) , if n < 140
 * T(n) ≤ T(n/5) + T(7n/10 + 6) + O(n) , if n ≥ 140
 *
 * TODO
 */

int main(void) {
    int A[6] = { 3, 6, 0, 10, 38, 4 };
    printf("%d\n", parttionSelect(A, 0, 5, 4));

    int A2[6] = { 3, 6, 0, 10, 38, 4 };
    printf("%d\n", parttionSelect(A2, 0, 5, 1));
    int A3[6] = { 3, 6, 0, 10, 38, 4 };
    printf("%d\n", parttionSelect(A3, 0, 5, 6));

    return 0;
}
