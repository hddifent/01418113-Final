#include <stdio.h>
#include <stdlib.h>

// global
typedef struct node__
{
    int value;              // or any data
    struct node__ *next;    // points to next node
} Node;

void PrintList(Node *list)
{
    Node *current = list;

    printf("[ ");
    while (current != NULL)
    {
        printf("%d ", current -> value);
        current = current -> next;
    }
    printf("]\n");
}

void AddFirstNode(Node **list, int num)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode -> value = num;
    newNode -> next = *list; // First node points to the current start node.
    *list = newNode; // Make it the first node.
}

void AddLastNode(Node **list, int num)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode -> value = num;
    newNode -> next = NULL; // Last node does not point to anything.
    
    if (*list == NULL) { *list = newNode; } // If it's the first node.
    else
    {
        Node *current = *list;
        while (current -> next != NULL) { current = current -> next; } // Find last node.
        current -> next = newNode; // Append newNode as last member.
    }
}

void DeleteNode(Node **list, int num)
{
    Node *current = *list, *prev = NULL;
    while (current != NULL)
    {
        if (current -> value == num)
        {
            if (prev == NULL) { *list = current->next; } // This is the first node.
            else { prev->next = current->next; }
            
            free(current); // Delete the node.

            return; // Terminates the function.
        }

        prev = current;
        current = current->next;
    }
}

int main()
{
    Node *myList = NULL;

    AddLastNode(&myList, 13);
    PrintList(myList);
    AddFirstNode(&myList, 100);
    PrintList(myList);
    AddLastNode(&myList, 0);
    PrintList(myList);
    AddFirstNode(&myList, 81);
    PrintList(myList);
    AddLastNode(&myList, 32);
    PrintList(myList);
    AddFirstNode(&myList, 35);
    PrintList(myList);
    DeleteNode(&myList, 100);
    PrintList(myList);
    DeleteNode(&myList, 35);
    PrintList(myList);
    DeleteNode(&myList, 32);
    PrintList(myList);
    DeleteNode(&myList, -10);
    PrintList(myList);
    DeleteNode(&myList, 13);
    PrintList(myList);
    DeleteNode(&myList, 0);
    PrintList(myList);
    DeleteNode(&myList, 81);
    PrintList(myList);
    DeleteNode(&myList, 191);
    PrintList(myList);
}