class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int> ans;
        int *check=new int[N+1];
        for(int i=2;i<=N;i++) check[i]=1;
        for(int i=2;i<=N;i++){
            if(check[i]==1){
                ans.push_back(i);
                for(int j=2;i*j<=N;j++) check[i*j]=0;
            }
        }
        return ans;
    }
};
