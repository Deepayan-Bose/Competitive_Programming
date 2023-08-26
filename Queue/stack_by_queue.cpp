#include <bits/stdc++.h>
using namespace std;


class Stack{
    queue<int> q1,q2;

public:
    void push(int data){
        q1.push(data);
    }

    int top(){
        int temp;
        while(!(q1.empty())){
            temp=q1.front();
            q1.pop();
            q2.push(temp);
        }
        while(!(q2.empty())){
            q1.push(q2.front());
            q2.pop();
        }
        return temp;
    }
    void pop(){
        int temp;
        while(!(q1.empty())){
            temp=q1.front();
            q1.pop();
            if(!(q1.empty())) q2.push(temp); 
        }
        while(!(q2.empty())){
            q1.push(q2.front());
            q2.pop();
        }
        return;
    }
    bool empty(){
        return q1.empty() and q2.empty();
    }
    
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.pop();
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();

    while(!s.empty()){
        cout << s.top()<<endl;
        s.pop();
    }

    return 0;
        
}
