#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(){
    keyType key;
    heap *root = heapCreateRoot();
    heapInsert(root, 4);
    heapInsert(root, 2);
    heapInsert(root, 5);
    heapInsert(root, 1);
    heapInsert(root, 1);

    node *n = heapExtractMin(root);
    printf("key: %d\n", n->key);
    free(n);

    n = heapExtractMin(root);
    printf("key: %d\n", n->key);
    free(n);

    n = heapExtractMin(root);
    printf("key: %d\n", n->key);
    free(n);

    n = heapExtractMin(root);
    printf("key: %d\n", n->key);
    free(n);

    n = heapExtractMin(root);
    printf("key: %d\n", n->key);
    free(n);

    free(root);
    return 0;
}
