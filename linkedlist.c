#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for Node, not int
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit if memory allocation fails
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the head
void insertAtHead(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insertAtPos(Node** head,int data,int pos){
    Node* newNode = createNode(data);
    if(*head == 0){
        *head = newNode;
        return;
    }
    
        Node* temp = *head;
        int index = 0;
        while(temp != NULL && index < pos-1){
            temp = temp->next;
            index++;
        }
    if(temp == NULL){
        printf("enter valid");
        free(newNode);
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;

}
void DeleteAtHead(Node** head){
    if(*head == NULL){
        printf("linked List is empty");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}
void deleteAtEnd(Node** head){
    if(*head == NULL){
        printf("linked list is empty");
        return;
    }
    Node* temp = *head;
    if(temp->next == NULL){
        free(temp);
        *head = NULL;
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;

}
void deleteAtPos(Node** head,int pos){
    
    if(*head == NULL){
        return;
    }
    Node* temp = *head;
      if(pos==0){
        *head=temp->next;
        free(temp);
      }
      for(int i=0;temp!=NULL&&i<pos-1;i++){
        temp=temp->next;
      }
      if(temp ==NULL || temp->next==NULL){
        printf("Linked list is empty");
        return;
      }
      Node* next = temp->next->next;
      free(temp->next);
      temp->next=next;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to demonstrate linked list operations
int main() {
    Node* head = NULL;

    insertAtHead(&head, 10);
    insertAtHead(&head, 30);
    insertAtHead(&head, 40);
    insertAtEnd(&head, 50);
    

    printf("Linked List: ");
    display(head);
    insertAtPos(&head, 60 , 2);
    display(head);
    DeleteAtHead(&head);
    display(head);
    deleteAtEnd(&head);
    display(head);
    deleteAtPos(&head,1);
    display(head);

    // Free allocated memory (optional but recommended)
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
