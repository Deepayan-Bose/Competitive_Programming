void deleteNode(struct Node **head, int key)
{

// Your code goes here
    Node* prev=*head,*curr=*head;
    while(curr->next!=*head){
        if(curr->data==key){
            prev->next=curr->next;
            delete curr;
        }
        else{
            prev=curr;
            curr=curr->next;
        }
    }

}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
// Your code goes here
    Node *prev=NULL,*curr=*head_ref;
    while(curr->next!=*head_ref){
        Node * temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        
    }
    curr->next=prev;
    (*head_ref)->next=curr;
    (*head_ref)=(*head_ref)->next;
    
    

}
