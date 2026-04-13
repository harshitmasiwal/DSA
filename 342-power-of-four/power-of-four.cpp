class Solution {
public:

    bool solve(int n){

        if( n == 1) return 1;
        if(n % 4 != 0) return 0;

        return solve(n/4);
       
    }
    bool isPowerOfFour(int n) {
        if(n < 1 ){
            return 0;
        }
        bool ans = solve(n);
        return ans;
        
    }
};