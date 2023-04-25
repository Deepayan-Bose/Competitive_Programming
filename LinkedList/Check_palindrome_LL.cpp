class Solution{
  public:
    Node* reverseLL(Node* &head){
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr!=NULL){
            Node*fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *&head)
    {
        //Your code here
        Node* slow_ptr=head,*fast_ptr=head->next;
        Node* curr1=head;
        while(fast_ptr!=NULL and fast_ptr->next!=NULL){
            fast_ptr=fast_ptr->next->next;
            slow_ptr=slow_ptr->next;
        }
        slow_ptr->next=reverseLL(slow_ptr->next);
        Node* curr2=slow_ptr->next;
        while(curr2){
            if(curr2->data !=curr1->data) return false;
            curr1=curr1->next,curr2=curr2->next;
        }
        return true;
    }
};
