class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int ans = nums[0];
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int bestEnding = nums[0];

        for(int i = 1; i < nums.size() ; i++){
            int v1 = minEnding * nums[i];
            int v2 = maxEnding * nums[i];
            int v3 = nums[i];

            minEnding = min(v1 , min(v2,v3));
            maxEnding = max(v1 , max(v2,v3));

            bestEnding = max(minEnding, maxEnding );

            ans = max(bestEnding , ans);
        }

        return ans;
        
    }
};