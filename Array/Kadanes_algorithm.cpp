class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int a[], int n){
        
        // Your code here
        bool flag=0;
        for(int i=0;i<n;i++) if(a[i]>0) {flag=1;break;} // Check if all elements are negative or not
        long long currSum=0, maxSum=INT_MIN;
        //Kadanes ALgorithm
        
            for(int i=0;i<n;i++){
                if(currSum<0) currSum=0;
                
                currSum+=a[i];
                maxSum=max(maxSum,currSum);
                
            }
        return maxSum;
        
    }
};
