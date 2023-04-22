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

void PrintKthfromend(Node* head,int k){
	Node* dummy_ptr=head,*ans=head;
	while(k){
    if(dummy_ptr==NULL) return ;
		dummy_ptr=dummy_ptr->next;
		k--;
	}
	while(dummy_ptr){
		dummy_ptr=dummy_ptr->next;
		ans=ans->next;
	}
	cout << ans->data;
}
