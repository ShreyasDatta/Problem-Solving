//Problem: https://leetcode.com/problems/remove-element/


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
