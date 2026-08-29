class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a = std::abs(z-x);
        int b = std::abs(z-y);

        if(a>b){
            return 2;
        }
        else if(b>a){
            return 1;
        }
        else{
            return 0;
        }
    }
};