//Problem: https://leetcode.com/problems/3sum-closest/submissions/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int n=nums.size();
        if(n<3)
            return{};
        
        int sum, diff=INT_MAX;
        
        for(int i=0;i<n;i++){
            int low=i+1;
            int high=n-1;
            
            while(low<high){
                int x, s;
                s=nums[i]+nums[low]+nums[high];
                
                if(s==target)
                    return s;
                else{
                    x=abs(target-s);
                    if(x<diff){
                        diff=x;
                        sum=s;
                    }
                    if(s <= target)
                        low++;
                    else
                        high--;
                }  
            }
             while(i < n - 1 && nums[i] == nums[i + 1])
                i++;
        }
        return sum;
    }
};
