typedef int keyType;

typedef struct heap{
    unsigned int count;
    struct node *root_node, *last_node;
}heap;

typedef struct node{
    keyType key;
    struct node *parent, *left, *right;
}node;

heap* heapCreateRoot();

node* heapCreateNode(keyType key);

void heapInsert(heap *root, keyType key);

void heapDecreaseKey(heap *root, node *heap_node, keyType key);

void heapSwapLeft(heap *root, node *heap_node);

void heapSwapRight(heap *root, node *heap_node);

void heapIncreseKey(heap *root, node *heap_node, keyType key);

node* heapFindParentInsertNode(heap *root);

node* heapFindLastNode(heap *root);

node *heapExtractMin(heap *root);

void heapPrint(node *root);
