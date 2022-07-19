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
            /*if(nums[i]<0 || nums[i]>=n)
                continue;*/
            long long int target1=target-nums[i];
            
            for(int j=i+1;j<n-2;j++){
                /*if(nums[j]<0 || nums[j]>=n)
                    continue;*/
                long long int target2=target1-nums[j];
                int low=j+1;
                int high=n-1;

                while(low<high){
                    /*if((nums[low]<0 || nums[low]>=n) && (nums[high]<0 || nums[high]>=n))
                        continue;*/

                    sum=nums[low]+nums[high];

                    if(sum<target2)
                        low++;
                    else if(sum>target2)
                        high++;
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
                /*while(j+1<n && nums[j+1] == nums[j]) 
                    j++;*/
            }
            /*while(i+1<n && nums[i+1] == nums[i]) 
                i++;*/
        }
        return v;
    }
    
};
