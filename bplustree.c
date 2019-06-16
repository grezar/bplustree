#include <stdio.h>

#include "bplustree.h"

int N;
Root root;
Leaf leaf;

void insert(int val) {
    if ( N > 1 ) {
        return;
    } else {
        leaf.value = val;
        leaf.next = NULL;
    }
    N++;
    return;
}

void printtree(void) {
    if ( N == 1 ) {
        printf("root: \n  %d\n", leaf.value);
        return;
    }
    printf("\n");
    return;
}

int main(int argc, char *argv[]) {
    int val, c;
    char s[1];

    for (;;) {
        printf("Insert: i > ");
        if (scanf("%1s%d", s, &val) != 2) {
            break;
        }

        switch (s[0]) {
            case 'i':
                insert(val);
                break;
            default:
                printf("Unknown operation\n");
                break;
        }

        printtree();
    }

    return 0;
}
