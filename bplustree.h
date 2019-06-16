#define M 5

typedef struct Node {
    int key[M-1];
    struct Node *children[M];
} Node;

typedef struct {
    Node *children[M];
} Root;

typedef struct Leaf {
    int value;
    struct Leaf *next;
} Leaf;
