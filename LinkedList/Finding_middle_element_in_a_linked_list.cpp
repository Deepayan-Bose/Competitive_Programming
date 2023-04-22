#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;

		//constructor
		Node(int d){
			data=d;
			next=NULL;
		}
};

//Reversing a Linked List (Iterative)
void ReverseIterative (Node *&head){
	Node* curr=head,*prev=NULL,*next;
	while(curr){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
}
//Recursively reverse a linked list
Node* reverseRecursuve(Node* head){
	if(head->next==NULL or head==NULL) return head;
	node *shead=reverseRecursuve(head->next);

	//node* temp=shead;
	//while(temp->next) temp=temp->next;
	//more optimized
	//Node* temp=head->next;
	head->next->next=head;
	head->next=NULL;
	//temp->next=head;
	return shead;
}
