class Solution
{
    
    public:
    Node* reverseLL(Node* head){
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
    void insertAtTail(Node *&head, int key){
        Node* curr=head;
        while(curr->next){
            curr=curr->next;
        }
        curr->next=new Node(key);
    }
    Node* addOne(Node *&head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *revNum=reverseLL(head);
        Node* curr=revNum;
        int carry=1;
        while(curr->next){
            if(carry!=0){
                int val = curr->data;
            val += carry;
            int digit = val%10;
            carry = val/10;
            curr->data = digit;
            curr = curr->next;
            }
            else break;
            
        }
         if(curr->data == 9 && carry != 0){
            curr->data = 0;
            insertAtTail(curr,1);
        }
        else{
            curr->data+=carry;
        }
        head=reverseLL(revNum);
        return head;
    
    }
};
