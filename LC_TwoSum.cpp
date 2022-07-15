//Problem: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            int b = target-nums[i];
            if(m.find(b)!=m.end()){
                v.push_back(m[b]);
                v.push_back(i);
                break;
            }
            m.insert(make_pair(nums[i], i));
        }
        return v;
    }
};
