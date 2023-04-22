class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* fast_ptr=head,*slow_ptr=head;
        while(fast_ptr and fast_ptr->next){
            fast_ptr=fast_ptr->next->next;
            slow_ptr=slow_ptr->next;
            
            if(fast_ptr==slow_ptr) break;
        }
        if(fast_ptr==slow_ptr){
        
        slow_ptr=head;
        if(slow_ptr==fast_ptr){
            while(fast_ptr->next!=slow_ptr) fast_ptr=fast_ptr->next;
        }
        else{
        while(slow_ptr->next !=fast_ptr->next){
            slow_ptr=slow_ptr->next;
            fast_ptr=fast_ptr->next;
        }
        }
        fast_ptr->next=NULL;
        }
    }
};
