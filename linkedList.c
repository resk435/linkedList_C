//This is a Linked-List library for a map

#include <stdio.h>
#include <stdlib.h>



struct node{
    int data;
};

struct node *getNewNode(const int data)
{
    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));
    newNode->data = data;
    printf("Created new person at %p\n", newNode);
    return newNode;
}

int main()
{
    struct node *node1 = getNewNode(2);
    struct node *node2 = getNewNode(19);

    free(node1);
    free(node2);

    return 0;
}
