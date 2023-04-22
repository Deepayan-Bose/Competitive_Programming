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

//Linked Class (object oriented)
/*
class LinkedList{
	node* head;
	node * tail;

public:
	LinkedList(){

	}
	void insert(int d){

	}
	...
	...
};
*/

//Functions (procedural programming)
void build(){

}
//passing a pointer by reference
void insertAtHead(Node *&head,int d){
	if(head==NULL){
		head=new Node(d);
		return;
	}
	else{
		Node* n=new Node(d);
		n->next=head;
		head=n;
	}
}

void printLinkedList(Node *head){
	while(head !=NULL){
		cout << head->data << "->";
		head=head->next;
	}
	cout << endl;
}
int length(Node * head){
	int ctr=0;
	while(head){
		ctr++;
		head=head->next;
	}
	return ctr;
}
void insertAtTail(Node *&head,int data){
	if(head==NULL){
		head=new Node (data);
		return;
	}
	Node * tail=head;
	while(tail->next){
		tail=tail->next;
	}
	tail->next=new Node (data);
	return ;
}
void deleteHead(Node *&head){
	if(head==NULL) return;
	Node *temp=head->next;
	delete head;
	head=temp;

}
void insertInMiddle(Node *&head,int d,int p){
	Node *temp=head;
	if(head==NULL or p==0){
		insertAtHead(head,d);
		return;
	}
	else if(p>length(head)) insertAtTail(head,d);
	else{
	while(p-1){
		temp=temp->next;
		p--;
	}
	Node * n=new Node(d);
	n->next=temp->next;
	temp->next=n;
}
}
void deleteTail(Node *&head){
	Node *tail=head,*prev=head;
	while(tail->next){
		prev=tail;
		tail=tail->next;
	}
	prev->next=NULL;
	delete tail;

}
void deleteMiddle(Node * &head,int p){
	if(head==NULL or p==0 ) return;
	else if(p==1) deleteHead(head);
	else if(p>=length(head)) deleteTail(head);
	else{
		Node *n=head,*prev=head;
		while(p-1){
			prev=n;
			n=n->next;
			p--;
		}
		prev->next=n->next;
		delete n;
	}
}
//Search Operation
// Linear Search
bool search(Node * head, int key){
	while(head){
		if(key==head->data) return true;
		head=head->next;
	}
	return false;
}
//recursively
bool searchRecursive(Node * head,int key){
	if(head==NULL) return false;
	if(head->data==key) return true;
	else return searchRecursive(head->next,key);
}

int main(){
	Node * head=NULL;
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	insertAtHead(head,0);
	printLinkedList(head);
	insertInMiddle(head,4,3);
	insertAtTail(head,0);
	deleteHead(head);
	printLinkedList(head);
	deleteMiddle(head,7);
	printLinkedList(head);

	if(searchRecursive(head,5)) cout << "Element Found";
	else cout << "Not Found";

}
