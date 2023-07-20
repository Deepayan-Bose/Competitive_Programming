class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        /*
        //Two pointer approach
        vector<vector<int>> ans;
        int n=nums.size();
        int j,k;
        sort(nums.begin(),nums.end());
        if(nums.size()<3) return {};
        if(nums[0]>0) return {}; // If first element in sorted array is positive then no such triplet exists such that their sum is zero
        for(int i=0;i<n-2;i++){
            if(nums[i]>0) break;
            if(i!=0 and nums[i]==nums[i-1]) continue; // To avoid duplication
            j=i+1;
            k=n-1;
            while(j<k){
                if(nums[j]+nums[k]<-nums[i]) j++;
                else if(nums[j]+nums[k]>-nums[i]) k--;
                else {
                    vector<int> anspart={nums[i],nums[j],nums[k]};
                    //sort(anspart.begin(),anspart.end());
                    ans.push_back(anspart);
                    int last_low_occurence=nums[j],last_high_occurence=nums[k];
                    while(j<k and nums[j]==last_low_occurence) j++;
                    while(k> j and nums[k]==last_high_occurence) k--;
                }
            }
        }
        
        return ans;
        */
        //Hashmap approach
        sort(nums.begin(),nums.end());
        if(nums[0]>0) return {};
        if(nums.size()<3) return {};
        vector<vector<int>> ans;
        unordered_map<int,int> mpp;

        int n=nums.size();
        for(int i=0;i<n;i++) mpp[nums[i]]=i;
        for(int i=0;i<n-2;i++){
            if(nums[i]>0) break;
            for(int j=i+1;j<n;j++){
                int required=-1*(nums[i]+nums[j]);
                if(mpp.find(required)!=mpp.end() and mpp.find(required)->second>j){
                    ans.push_back({nums[i],nums[j],required});
                }
                j=mpp.find(nums[j])->second;
            }
            i=mpp.find(nums[i])->second;
        }
        
        return ans;

    }
};
