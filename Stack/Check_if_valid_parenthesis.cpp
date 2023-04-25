class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s1;
        for(char c:x){
            if(c==')'){
                if(!s1.empty() and s1.top()=='(') s1.pop();
                else return false;
            }
            else if(c=='}'){
                if(!s1.empty() and s1.top()=='{') s1.pop();
                else return false;
            }
            else if(c==']'){
                if(!s1.empty() and s1.top()=='[') s1.pop();
                else return false;
            }
            else s1.push(c);
        }
        if(!s1.empty()) return false;
        return true;
    }

};
