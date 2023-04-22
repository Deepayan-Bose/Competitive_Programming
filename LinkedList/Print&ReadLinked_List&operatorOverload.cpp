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


Node* take_input_2(){
	int d;
	cin >> d;

	Node* head=NULL;
	while(d!=-1){
		insertAtHead(head,d);
		cin >> d;
	}
	return head;
}
ostream& operator<<(ostream &os, Node *head){
	printLinkedList(head);
	return os; //cout
}
istream& operator>>(istream &is,Node* head){
	head=take_input_2();
	return is;
}
int main(){
	Node *head,*head2;
	cin >> head >> head2;
	cout << head << head2;


}
