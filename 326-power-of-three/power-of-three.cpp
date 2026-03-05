class Solution {
public:
    bool isPowerOfThree(int n) {

        if( n == 1 || n==3 ) return 1;

        long long x = 3;
        while(x < n ){
            x = x*3;
            if(x == n){
                return 1 ;
            }
        }

        return 0;
    }
};