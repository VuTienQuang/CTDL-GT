#include<bits/stdc++.h>
 using namespace std;
 
 struct node{
 	int data;
	 struct node *next; 
 }; 
 typedef struct node node;
 node* makeNode(int x){
 	node *newNode = new node();
	 newNode->data = x;
	 newNode->next = NULL;
	 return newNode; 
 } 
