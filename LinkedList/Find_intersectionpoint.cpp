int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1==NULL or head2==NULL) return -1;
    int length1=0;
    int length2=0;
    Node* temp1=head1,*temp2=head2;
    while(temp1){
        temp1=temp1->next;
        length1++;
    }
    temp1=head1;
    while(temp2){
        temp2=temp2->next;
        length2++;
    }
    temp2=head2;
    if(length1>=length2){
        int diff=length1-length2;
        while(diff--) temp1=temp1->next;
    }
    else{
        int diff=length2-length1;
        while(diff--) temp2=temp2->next;
    }
    while(temp1 and temp2){
        if(temp1==temp2) return temp1->data;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;
}
