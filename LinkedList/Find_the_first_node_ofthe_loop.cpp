class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        Node* fast_ptr=head,*slow_ptr=head;
        while(fast_ptr and fast_ptr->next){
            fast_ptr=fast_ptr->next->next;
            slow_ptr=slow_ptr->next;
            if(slow_ptr==fast_ptr) break;
        }
        if(slow_ptr==fast_ptr){
            
            slow_ptr=head;
            if(slow_ptr==fast_ptr) return slow_ptr->data;
            while(slow_ptr!=fast_ptr){
                slow_ptr=slow_ptr->next;
                fast_ptr=fast_ptr->next;
            }
            return slow_ptr->data;
        }
        else return -1;
    }
};
