//Problem: https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<4)
            return{};
        int sum;
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        
        for(int i=0; i<n-3; i++){
            long long int target1=target-nums[i];
            
            for(int j=i+1;j<n-2;j++){
                long long int target2=target1-nums[j];
                int low=j+1;
                int high=n-1;

                while(low<high){
                    sum=nums[low]+nums[high];

                    if(sum<target2)
                        low++;
                    else if(sum>target2)
                        high--;
                    else {
                        v.push_back({nums[i], nums[j], nums[low], nums[high]});
                        int current_low=nums[low];
                        int current_high=nums[high];
                        
                        while(low < high && nums[low] == current_low) 
                            low++;

                        while(low < high && nums[high] == current_high) 
                            high--;
                    }
                }
                while(j+1<n && nums[j+1] == nums[j]) 
                    j++;
            }
            while(i+1<n && nums[i+1] == nums[i]) 
                i++;
        }
        return v;
    }
    
};
