#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

//For traversing the contents of each node of a linked list
void printList(Node * n){
	while( n!=NULL){
		cout << n->data << ' ';
		n=n->next;
	}
}
//Drivers code
int main(){
	//Declare three nodes and allocate memory in heap
	Node* head=NULL,*second=NULL,*third=NULL;
	head=new Node(),second=new Node(), third=new Node();
	
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	
	printList(head);
	return 0;
}
	
	
