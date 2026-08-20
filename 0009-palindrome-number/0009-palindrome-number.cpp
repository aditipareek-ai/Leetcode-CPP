class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0) return false;
        int original = n;
        int pal = 0;

        while(n>0){
            int lastdigit = n%10;
            if(pal > INT_MAX/10 || pal < INT_MIN/10){
                return false;
            }
            pal = pal*10 + lastdigit;
            n = n/10;
        }
        if(pal == original){
            return true;
        }
        else{
            return false;
        }
    }
};