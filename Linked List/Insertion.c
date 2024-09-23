#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

void create(int Arr[], int n) {
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = Arr[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = Arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int count(struct Node *p) {
    int count = 0;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

void Insert(struct Node *p, int index, int value) {
    struct Node *t;
    int i;

    if (index < 0 || index > count(p)) {
        return;
    }

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    if (index == 0) {
        t->next = first;
        first = t;
    } else {
        for (i = 0; i < index - 1; i++) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int main() {
    Insert(first, 0, 1);
    Insert(first, 1, 2);
    Insert(first, 2, 3);
    Insert(first, 3, 4);
    Insert(first, 0, 10);

   display(first);

   return 0;
}
