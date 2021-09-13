//This is a basic Linked-List Library

#include <stdio.h>
#include <stdlib.h>



struct node{
    int data;
    node* next;
    node* prev;
}

struct node *getNewNode(const int data)
{
    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    printf("Created new person at %p\n", newNode);
    return newNode;
}

int main()
{
    struct node *node1 = getNewNode(2);
    struct node *node2 = getNewNode(19);

    return 0;
}