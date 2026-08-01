class Solution {
public:

    int climbStairs(int n) {

        if(n <= 2){
            return n ;
        }

        int n_2 = 2 ;
        int n_1 = 1 ;
        int ans = 0 ;

        for(int i = 3 ; i <= n ; i++){
            ans = n_2 + n_1 ;
            n_1 = n_2;
            n_2 = ans;
        }
        
        return ans;
    }
};