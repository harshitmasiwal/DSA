class Solution {
public:

    int findSum(int n ){
            int ans = 0 ;
            while (n!=0){
                int temp = n%10;
                n = n /10;
                ans += temp*temp;
            }

        return ans;
    }

    bool isHappy(int n) {

        unordered_map<int,int>freq;

        while(n!=1){
            n = findSum(n);
            freq[n] += 1;
            if(freq[n] > 1){
                return false;
            }
        }

        return true;
    }
};