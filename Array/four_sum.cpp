class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        //if(nums[0]>target) return {}; Wrong in case target is non positive
        if(nums.size()<4) return {};
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){
            //if(nums[i]>=target and target>0) break;Wrong in case target is non positive
            if(target==0 and nums[i]>target) break;
            if (i>0 and nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                
                if(j>i+1 and nums[j]==nums[j-1]) continue;
                int low=j+1,high=n-1;
                long long requiredSum=(long long)target-(long long)nums[i]-(long long)nums[j];
                while(low<high){
                    if(nums[low]+nums[high]<requiredSum){
                        int last_low_occuring=nums[low];
                        while(low<high and nums[low]==last_low_occuring) low++;
                    }
                    else if(nums[low]+nums[high]>requiredSum){
                        int last_high_occuring=nums[high];
                        while(high>low and nums[high]==last_high_occuring) high--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        int last_low_occuring=nums[low];
                        while(low<high and nums[low]==last_low_occuring) low++;
                        int last_high_occuring=nums[high];
                        while(high>low and nums[high]==last_high_occuring) high--;
                    }
                }

            }
        }
        return ans;
    }
};
