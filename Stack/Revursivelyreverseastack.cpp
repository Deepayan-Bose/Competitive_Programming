void reverseStackrec(stack<int> &s){
    //base case
    if(s.empty()) return;
    //otherwise
    //pop out the top element and insert it at bottom of 'reversed smaller stack'
    int x=s.top();
    s.top();
    //rec reverse the smaller stack
    reverseStackrec(s);
    insertAtBottom(s,x);
}

void insertAtBottom(stack<int> &s,int x){
    //base case
    if(s.empty()) s.push(x);
    int data=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(data);
}
