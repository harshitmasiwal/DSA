class Solution {
public:

    int solve(vector<int>&nums,int i,vector<int>&memo){
        
        if( i > nums.size()-1){
            return 0;
        }

        if(memo[i] != -1){
            return memo[i];
        }
        //either skip
        int ans1 = solve(nums,i+1,memo);
        //either rob
        int ans2 = nums[i]+ solve(nums,i+2,memo);

        return  memo[i] = max(ans1,ans2);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();
        vector<int>memo(n+1,-1);
        int ans = solve(nums,0,memo);
        
        return ans;
    }
};