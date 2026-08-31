class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int curr = nums[0];
        int ans = nums[0];

        for(int i = 1 ; i < nums.size() ; i++){

            curr = max(nums[i] , curr+nums[i]);

            if(ans < curr){
                ans = curr;
            }

        }
        
        return ans;
    }
};