class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reversearr(vector<long long> &arr,int i,int j){
        while(i<j){
            swap(arr[i++],arr[j--]);
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i=0,j=0,count;
        while(j<n){
            count=k-1;
            while(j<n-1 and count--) j++;
            reversearr(arr,i,j);
            if(j==n-1) break;
            i=j+1;
            j=j+1;
        }
    }
};
