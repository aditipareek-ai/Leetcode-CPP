class Solution {
public:
    int reverse(int n) {
        int newNumber = 0;
        while(n!=0){
            int lastdigit = n%10;
            if(newNumber > INT_MAX/10 || newNumber < INT_MIN/10){
                return 0;
            }
            newNumber = newNumber*10 + lastdigit;
            n = n/10;
        }
        return newNumber;
    }
};