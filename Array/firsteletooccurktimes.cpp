class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        int i=0;
        while(i<n-1){
            if((i%2)==0){
                if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
            }else{
                if(arr[i]<arr[i+1]) swap(arr[i],arr[i+1]);
            }
            i++;
        }
        
        // code here
    }
};
