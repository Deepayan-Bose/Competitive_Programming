class Solution
{
public:
    int digitalRoot(int N)
    {
        // Write Your Code here
        N=N%9;
        return (N==2 or N==3 or N==5 or N==7) ? 1:0; 
    }
};

//There is a unique property of modulo 9 which implies that remainder of number when divided by 9 returns its digital root as specified(repeated addition of digits until single digit number is formed)

