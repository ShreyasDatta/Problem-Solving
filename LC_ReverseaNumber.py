class Solution:
    def reverse(self, x: int) -> int:
        rev=''
        while(x):
            y=x%10
            rev=rev+str(y)
            x=x//10
        return rev
