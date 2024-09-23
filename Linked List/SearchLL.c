#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int Arr[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = Arr[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = Arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
struct Node *search(struct Node *p, int key)
{
    while (p)
    {
        if (p->data == key)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
    printf("Key Not Found");
}
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    int size, key;
    struct Node *temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int Arr[size];
    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Arr[i]);
    }
    create(Arr, size);
    display(first);
    printf("\nEnter the Key: ");
    scanf("%d", &key);
    temp = search(first, key);
    if (temp)
        printf("Key is found %d\n", temp->data);
    else
        printf("Key is not found");
    return 0;
}
