#include<bits/stdc++.h>
struct Node{
	int data;
	struct node *next; 
}; 
struct Node* head = NULL;
void insert(int new_data){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node-> Node = head;
	head = new_node;
} 
void in(){
	struct Node* ptr;
	ptr = head;
	while(ptr != NULL){
		cout <<ptr->data<<" ";
		prt = ptr->next;
	}
}
void insert_position(int pos , int value){
	node *new_node = new node; 
	node *pre = new node;
	node *cur = new node;
	int k = 1; 
	while (cur != NULL && k < pos) {
        pre = cur;
        cur = cur->next;
        k++;
    }
   prev->next = new_node;
    new_node->next = current;
	
}
void delete_position(int pos){
	node * cur= new node;
	node *pre = new node;
	cur = head;
	for(int i = 1;i <pos;i++){
		pre = cur;
		cur = cur->next; 
	} 
} 
int main(){
	insert(1);
	insert(5);
	insert(34);
	insert(17);
	insert(12);
	in();
}
