class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int rev = 0,rem;
        int temp = x;
        while(temp != 0){
            rem = temp%10;
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && rem > 7)) return 0;
            rev = rev * 10 + rem;
            temp = temp/10;
        }
       
       return rev==x;
    }
};