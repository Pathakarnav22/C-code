#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    struct Node* next;
    struct Node* prev;
    int data; 
}Node;

void insertAtStart( Node** head,int data){
    Node* new_Node = (Node*)malloc(sizeof(Node));
    new_Node->data=data;
    new_Node->prev=NULL;
    if((*head)!=NULL){
        (*head)->prev=new_Node;
    }
    (*head) = new_Node;
}
void insertAtEnd(Node** head,int data){
    Node* new_Node =(Node*)malloc(sizeof(Node));
    Node* last =(*head);
    new_Node->data=data;
    new_Node->next=NULL:
    if(*head ==NULL){
        new_Node->prev=NULL;
        *head = new_Node;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_Node;
    new_Node->prev = last;
}
void display(Node* node){
    printf("Traverse in forward direction");
    if(node != NULL){
        printf("%d -> ", node->data);
        last = node;
        node=node->next;

    } 
    printf("Traverse in reverse direction");
    if(last!=NULL){
        printf("%d -> ", last->data);
        node= last;
        last=last->prev;
    }
}
