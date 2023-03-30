class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    //using only one pointer
    int getMiddle(Node *head)
    {
        int ctr=0;
        Node *mid=head;
        
        while(head){
            if(ctr&1){
                mid=mid->next;
            }
            ctr++;
            head=head->next;
        }
        return mid->data;
    }
    //using two pointer
    int getMiddle(Node *head){
      Node* fast_ptr=head,*slow_ptr=head;
      if(head !=NULL){
        while(fast_ptr!=NULL && fast_ptr->next!=NULL){
          fast_ptr=fast_ptr->next->next;
          slow_ptr=slow_ptr->next;
        }
      }
        if(slow_ptr !=NULL){
          return slow_ptr->data;
         }
};
