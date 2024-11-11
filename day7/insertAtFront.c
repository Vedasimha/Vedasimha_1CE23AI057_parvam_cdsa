#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char data[16];
    struct Node *link;
} Node;

Node *insertAtFront(Node *first) // call by value
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->link = NULL;
    printf("Enter data of the node: ");
    scanf("%s", newNode->data);
    if (first == NULL) // check if list is empty
        return newNode;
    newNode->link = first;
    return newNode;
}

Node *deleteFromRear(Node *head) // call by value
{
    if (head == NULL)
    {
        puts("List is empty");
        return head;
    }
    if (head->link == NULL)
    {
        printf("Node with data %s is deleted \n", head->data);
        free(head);
        return NULL;
    }
    Node *temp = head;
    while (temp->link->link != NULL) // check if next node is last node
        temp = temp->link;           // traverse to the next node
    printf("Node with data %s is deleted \n", temp->link->data);
    free(temp->link);  // delete last node
    temp->link = NULL; // make the last but node as the last node
    return head;
}

void displayList(const Node *head)
{
    if (head == NULL)
    {
        puts("List is empty");
        return;
    }
    puts("List elements are");
    while (head != NULL)
    {
        printf("%s   ", head->data);
        head = head->link;
    }
}

int main() {
    Node *head = NULL;
    int choice = 0;
    do {
        printf("\n1. Insert at Front\n2. Delete\n3. Display\n4. Exit\nEnter your Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: head = insertAtFront(head);break;
            case 2: head = deleteFromRear(head); break;
            case 3: displayList(head); break;
            case 4: exit(0);
            default: printf("Invalid Choice Selected.");
        }
    }
    while(choice != 4);
    return 0;
}

