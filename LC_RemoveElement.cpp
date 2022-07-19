//Problem: https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            if(nums[i] == val) {
                if (nums[j] != val) nums[i++] = nums[j--];
                else j--;
            }
            else i++;
        }
        return i;
    }
};

/*-------------------------------------------------------------*/
//Python solution

def removeElement(self, nums: List[int], val: int) -> int:
        i=0
        while(i < len(nums)):
            if(nums[i]==val):
                nums.remove(nums[i])
            else:
                i+=1
        return len(nums)
