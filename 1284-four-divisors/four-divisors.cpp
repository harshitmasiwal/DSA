class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        long long ans = 0 ; 

        for(int i = 0 ; i < nums.size() ; i++){
            long long dictDiv = 1; 
            long long sum = nums[i];

            for(int j = 1 ; j <= nums[i]/2 ; j++){
                if( nums[i] % j == 0){
                    dictDiv++;
                    if(dictDiv > 4 ) break ;
                    sum += j;
                }
            }

            if(dictDiv == 4 ) {
                ans += sum;
            }
        }
        return ans;
        
    }
};