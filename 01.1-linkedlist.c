#include <stdio.h>
#include <stdlib.h>

typedef struct node__
{
    int data;
    struct node__ *nextNode;
} Node;

void AddNode(Node **firstNode, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->nextNode = NULL;

    if (*firstNode == NULL)
    {
        *firstNode = newNode;
        return;
    }

    Node *current = *firstNode;
    while (current->nextNode != NULL)
    {
        current = current->nextNode;
    }
    current->nextNode = newNode;
}

int main()
{
    Node *firstNode = NULL;

    AddNode(&firstNode, 53);
    AddNode(&firstNode, 44);

    printf("%d\n", firstNode->data);
    printf("%d\n", firstNode->nextNode->data);
}