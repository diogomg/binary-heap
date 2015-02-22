#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(){
    keyType key;
    heap *root = heapCreateRoot();
    /*heapInsert(root, 1);    puts("");
    heapInsert(root, 2);    puts("");
    heapInsert(root, 3);    puts("");
    heapInsert(root, 4);    puts("");
    heapInsert(root, 5);    puts("");    puts("");

    node *n = heapExtractMin(root);free(n);
    n = heapExtractMin(root);free(n);
    n = heapExtractMin(root);free(n);
    n = heapExtractMin(root);free(n);
    n = heapExtractMin(root);free(n);
    free(root);*/
    while(scanf("%d",&key) != EOF){
        heapInsert(root, key);
        puts("");
    }
    node *n = NULL;
    int number = 0, i=1;
    do{
        n = heapExtractMin(root);
        if(n->key > number)
            printf("i: %d\tkey: %d\tprev: %d\n", i, n->key, number);
        if(n)
            free(n);
        else
            n = NULL;
        i++;
    }while(n);
    free(root);
    return 0;
}
