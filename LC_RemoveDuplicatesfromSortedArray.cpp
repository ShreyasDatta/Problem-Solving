//Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int prev = nums[0];
        for(int j = 1; j < nums.size() ; j++){
            if(nums[j] != prev){
                prev = nums[j];
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

/*--------------------------------------------------------*/
//Python Solution

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i=0
        while(i<len(nums)-1):
            if(nums[i]==nums[i+1]):
                nums.remove(nums[i])
            else:
                i+=1
                
        return len(nums)
                  
                  
/*--------------------------------------------------------*/
//Python Solution2
                  
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        nums[:] = sorted(set(nums))
        return len(nums)
