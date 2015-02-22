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

node* heapFindParentInsertNodeToAdd(heap *root);

void heapDecreaseKey(heap *root, node *heap_node, keyType key);

void heapIncreseKey(heap *root, node *heap_node, keyType key);

node *heapExtractMin(heap *root);

void heapPrint(node *root);
