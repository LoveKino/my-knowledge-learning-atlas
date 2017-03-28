#include <stdio.h>
#include <math.h>
/**
 * find a maximum subarray of the A[low..high]
 */

/**
 * divide and conqure
 *
 * A[low..mid..high]
 *
 * maximum subarry A[i..j]
 *
 * devide: 
 * (i)  A[i..j] in A[low..mid]
 *      low ≤ i ≤ j ≤ mid
 *
 * (ii) A[i..j] in A[mid+1..high]
 *      mid + 1 ≤ i ≤ j ≤ high
 *
 * (iii)A[i..j] crossing the mid
 *      low ≤ i ≤ mid < j ≤ high 
 * conqure:
 *      compare three parts, find the biggest
 *
 *  analysis
 *      T(1) = Ø(1)
 *      T(n) = 2T(n/2) + Ø(n)
 *  T(n) = Ø(n lgn)
 */

void findMaxCrossMid (int *A, int p, int m, int q, int *ret) {
    // left [p..m]
    int left_index = m, left_sum = A[m], sum=A[m];
    for(int i = m - 1;i >= p; i--) {
        sum += A[i];
        if(sum > left_sum) {
            left_index = i;
            left_sum = sum;
        }
    }
    // right [m+1..q]
    sum = A[m + 1];
    int right_sum = A[m + 1], right_index = m + 1;
    for(int i = m + 2; i<= q; i++){
        sum += A[i];
        if(sum > right_sum) {
            right_index = i;
            right_sum = sum;
        }
    }
    ret[0] = left_index;
    ret[1] = right_index;
    ret[2] = left_sum + right_sum;
}

void findMaxSub (int *A, int p, int q, int *rret) {
    if(p == q) {
        rret[0] = p;
        rret[1] = q;
        rret[2] = A[p];
        return;
    } 
    int ret[3][3];
    int mid = floor(p + (q - p) / 2);
    // in left
    findMaxSub(A, p, mid, ret[0]);
    // in right
    findMaxSub(A, mid + 1, q, ret[1]);
    // cross mid
    findMaxCrossMid(A, p, mid, q, ret[2]);

    // find the bigest one
    int flag = 0;
    if(ret[1][2] > ret[flag][2]) {
        flag = 1;
    }
    if(ret[2][2] > ret[flag][2]) {
        flag = 2;
    }
    rret[0] = ret[flag][0];
    rret[1] = ret[flag][1];
    rret[2] = ret[flag][2];
}

/**
 * TODO linear time solution
 */

int main (void) {
    int A[] = { 1, -10, 3, 4, -6, 8, -1, 20, 11, -6 };
    int ret[3];
    findMaxSub(A, 0, 9, ret);
    printf("%d  %d  %d", ret[0], ret[1], ret[2]);

    return 0;
}
