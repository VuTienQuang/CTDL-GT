#include<bits/stdc++.h>
using namespace std;
struct node{
	struct node *prev;
	int data;
	struct node * next; 
}; 
void insert_front(struct Node** head ,int new_data)
{
	struct Node* newNode = new Node;
	newNode -> data = new_data;
	newNode->next = (*head);
	newNode->prev = NULL;
	if((*head) != NULL) 
	 (*head)-> prev = newNode;
	 (*head) = newNode; 
 } 
 void appendNode(Node** head, int data) {
    Node* new_node = new Node; // T?o node m?i
    new_node->data = data;
    new_node->next = NULL;
    
    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }
    Node* last_node = *head;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }
    last_node->next = new_node;
    new_node->prev = last_node;
}
 void display(struct Node* node){
 	struct Node* last;
	 while(node!= NULL){
	 	cout << node->data <<" ";
		 last = node;
		 node = node->next; 
	 } 
 } 
 
