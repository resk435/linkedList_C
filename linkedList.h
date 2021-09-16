#ifndef linkedList
#define linkedList

#define NUM_COLUMNS 19
#define NUM_ROWS 15


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
};

struct node *createNewNode(const int data){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    return newNode;
};


#endif