class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        unordered_map<long long,long long> mpp;
        for(int i=0;i<N;i++){
            mpp[A[i]]++;
            mpp[B[i]]--;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second!=0) return 0;
        }
        return 1;
        
    }
};
