#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void create(int arr[], int n)
{
    int i;
    struct node *t, *last;

    // Allocate memory for the head node and initialize
    head = (struct node *)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = head; // Circular link for the first node
    last = head;       // Set last to the head

    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = arr[i];
        t->next = last->next; // Circular link
        last->next = t;       // Link the new node to the last node
        last = t;             // Move last to the new node
    }
}

void display(struct node *h)
{
    do
    {
        printf("%d ", h->data); // Corrected `printf`
        h = h->next;
    } while (h != head); // Loop until we reach the head again
    printf("\n");        // Newline after displaying the list
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    create(arr, 6);
    display(head);
    return 0;
}
