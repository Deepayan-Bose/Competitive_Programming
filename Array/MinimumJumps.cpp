// Function to return minimum number of jumps to end of array

//Important: Using Greedy Approach

class Solution{
  public:
    int minJumps(int a[], int n){
       //Check if array is singular is empty
       if(n<=1) return 0;
       
       //Check if the first step is 0 or not
       if(a[0]==0) return -1;
       
       int steps=a[0],maxReach=a[0],jump=1;
       
       for(int i=1;i<n;i++){
           if(i>=n-1) return jump;
           
           maxReach=max(maxReach,a[i]+i);
           steps--;
           if(steps<=0){
               jump++;
               
               if(i>=maxReach) return -1;
               
               steps=maxReach-i;
           }
       }
       return -1;
    }
};
