class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int ans = 0 ;
        int x = 0 , y = 0 ;

        for(int i = 1 ; i < n*2 ; i = i+2 ){
            x = x+i;
        }

        for( int i = 2; i < n*2 ; i= i+2 ){
            y = y+i;
        }

        ans = gcd(x,y);

        return ans;

        
    }
};