class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int low = 0 ;
        int high = 0 ;

        int n = nums.size();

        int ans = INT_MAX;
        int currSum = nums[0];

        while(high < n ){

            if(high == n-1 && target > currSum){
                return ans==INT_MAX ? 0 : ans;
            }

            while(target <= currSum){
                //shrink 
                ans = min(ans , high - low+1);
                currSum = currSum - nums[low];
                low++;
            }
            //expand 
            high++;
            if(high == n ){
                break;
            } 
            currSum += nums[high];

        }
        
        return ans;
    }
};