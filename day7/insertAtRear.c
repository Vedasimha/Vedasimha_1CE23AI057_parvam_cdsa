#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char data[16];
    struct Node *link;
} Node;

Node *insertAtRear(Node *first) // call by value
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->link = NULL;
    printf("Enter data of the node: ");
    scanf("%s", newNode->data);
    if (first == NULL) // check if list is empty
        return newNode;
    if (first->link == NULL)
    {
        first->link = newNode;
        return first;
    }
    Node *temp = first;
    while (temp->link != NULL)
        temp = temp->link;
    temp->link = newNode;
    return first;
}

void deleteFromFront(Node **head) // call by address
{
    if (*head == NULL)
    {
        puts("List is empty");
        return;
    }
    Node *temp = *head;    // copy address of 1st node into temp
    *head = (*head)->link; // make head point to 2nd node. Note that we are accessing the actual head
    printf("Node with data %s is deleted \n", temp->data);
    free(temp);
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
        printf("\n1. Insert at Rear\n2. Delete from front\n3. Display\n4. Exit\nEnter your Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: head = insertAtRear(head);break;
            case 2: deleteFromFront(&head); break;
            case 3: displayList(head); break;
            case 4: exit(0);
            default: printf("Invalid Choice Selected.");
        }
    }
    while(choice != 4);
    return 0;
}