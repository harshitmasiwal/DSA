class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        

        int mx = nums[0];
        int mn = nums[0];

        int curr_min = nums[0];
        int curr_max = nums[0];
        int total_sum = nums[0];
        for(int i = 1 ; i < nums.size() ;i++){
            
            curr_min = min(nums[i],curr_min+nums[i]);
            curr_max = max(nums[i],curr_max+nums[i]);

            if(curr_max > mx){
                mx = curr_max;
            }

            if(curr_min < mn){
                mn = curr_min;
            }

            total_sum += nums[i];
        }

        if(mx > 0 ){
          return max(mx , total_sum-mn );
        }


        return mx;
    }
};