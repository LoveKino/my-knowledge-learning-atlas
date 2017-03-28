#include <stdio.h>

void printArray(int *A, int len) {
   for(int i = 0; i < len; i++) {
       printf("%d ", A[i]);
   }
}

/**
 * stack LIFO
 *
 * some states:
 *      empty
 *      underflow
 *      overflow
 */
typedef struct {
    int top;
    int * v;
} Stack;

int stackEmpty(Stack S) {
    if(S.top == 0) {
        return 1;
    }
    return 0;
}

void stackPush(Stack* S, int k) {
    S -> v[S -> top] = k;
    S -> top ++;
}

int stackPop(Stack* S) {
    if(!stackEmpty(*S)) {
        S -> top--; 
        return S -> v[S -> top + 1];
    } else {
        printf("stack is empty");
        return 0;
    }
}

/**
 * Queues FIFO
 *
 * Q.head Q.head+1 ... Q.tail-1
 *
 * underflows overflows
 */
typedef struct {
    int head;
    int tail;
    int * v;
} Queue;

void enQueue (Queue* Q, int v) {
   Q -> v [ Q -> tail ] = v;
   Q -> tail ++;
}

void deQueue(Queue* Q) {
    Q -> head ++;
}

/**
 *
 * node (prev, key, next)
 *
 * linked list
 *
 * head -> first -> second -> ...
 *
 * if head.next is Nil, list is empty
 *
 * double linked list
 * head -> first <=> second <=> ...
 * TODO
 */

/**
 * rooted tree
 *
 * node (parent, left, right, value)
 *
 * general
 *
 * node (parent, childs, value)
 *
 * left-child right-sibling representation
 * 1. x.left-child points to the leftmost child of node x
 * 2. x.right-sibling points to the sibling of x immediately to its right
 *
 * TODO
 */

int main(void) {
    int v[100];
    Stack S = { 0, v };

    stackPush(&S, 1);
    stackPush(&S, 3);
    stackPush(&S, 100);
    printArray(S.v, S.top);
    printf("\n");
    stackPop(&S);
    stackPop(&S);
    printArray(S.v, S.top);
}
