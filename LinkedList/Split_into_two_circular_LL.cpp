void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    //There are two cases : Odd nodes and even nodes
    Node* fast_ptr=head->next,*fast_prev=fast_ptr,*slow_ptr=head;
    while(fast_ptr->next!=head and fast_ptr!=head){
        fast_prev=fast_ptr;
        fast_ptr=fast_ptr->next->next;
        slow_ptr=slow_ptr->next;
    }
    Node* mid=slow_ptr->next;
    fast_prev=fast_prev->next;
    if(fast_ptr==head) fast_prev->next=slow_ptr->next;
    else fast_ptr->next=slow_ptr->next;
    slow_ptr->next=head;
    *head1_ref=head;
    *head2_ref=mid;
    
}
