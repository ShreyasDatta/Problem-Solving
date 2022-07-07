#Problem: https://leetcode.com/problems/reverse-integer/

reversed_num = 0
        while x != 0:
            reversed_num = (reversed_num * 10) + (x % 10)
            x //= 10
        return reversed_num
    
    
    
$--------------------------------------------------------------------------------#


#Optimised
class Solution:
    def reverse(self, x: int) -> int:
        isNegative = False
        if x < 0:
            isNegative = True
            x = -x
        reversedNumber = 0
        while x:
            reversedNumber = reversedNumber * 10 + x % 10
            x //= 10
        if reversedNumber >= 2 ** 31 - 1 or reversedNumber <= -2 ** 31:
            return 0
        return -reversedNumber if isNegative else reversedNumber
