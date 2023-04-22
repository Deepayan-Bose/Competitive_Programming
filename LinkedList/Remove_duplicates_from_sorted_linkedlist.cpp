Node *removeDuplicates(Node *head)
{
 // your code goes here
 
 if(head->next==NULL or head==NULL) return head;
 Node* curr=head;
 Node* prev=head;
 while(curr){
     while(curr->next!=NULL and curr->data==curr->next->data) curr=curr->next;
     prev->next=curr->next;
     curr=curr->next;
     prev=curr;
 }
 return head;
 
}
