//problem: https://leetcode.com/problems/reverse-integer/submissions/

class Solution {
public:
    int reverse(int x) {
        int y, rev=0;
        while(x){
            y=x%10;
            rev=(rev*10)+y;
            x=x/10;
        }
        return rev;
    }
};
