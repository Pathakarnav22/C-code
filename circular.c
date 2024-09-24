#include<iostream>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

void insertAtHead(Node** head,int data){
    Node* new_Node = (Node*)malloc(sizeof(Node));
    Node* last = *head;
    new_Node -> data = data;
    new_Node -> next = *head
    if(*head == NULL){
        *head = new_Node;
        return;
    }else
    Node* temp = *head;
}