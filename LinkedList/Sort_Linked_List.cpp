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
Node* mergeTwoLists(Node* list1, Node* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        Node *curr;
        if(list1->val<=list2->val) {
            curr=list1;
            curr->next=mergeTwoLists(list1->next,list2);
        }
        else {
            curr=list2;
            curr->next=mergeTwoLists(list1,list2->next);
        }
        return curr;
}

Node * mergeSort(Node *head){
	//1.Base case
	if(!head or !head->next) return head;
	Node* mid=midpoint(head);
	Node* a=head;
	Node *b=mid->next;

	mid->next=NULL;

	//2. rec sort the two linked lists
	a=mergeSort(a);
	b=mergeSort(b);

	//3. merge two sorted l.l
	Node * c=mergeTwoLists(a,b);
	return c;

}
Node* midpoint(Node* head){
	Node* fast_ptr=head->next;
	Node* slow_ptr=head;
	while(fast_ptr and fast_ptr->next){
		fast_ptr=fast_ptr->next->next;
		slow_ptr=slow_ptr->next;
	}
	return slow_ptr;
}
int main(){
	Node *head,*
	cin >> head >> head2;
	cout << head << head2;
	
}
