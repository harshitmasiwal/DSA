class Solution {
public:

    bool solve(int i , vector<int>&nums,int sum,int curr,vector<vector<int>>&memo){

        if(curr > sum){
            return false;
        }   
        if(i < 0){
            return false;
        }

        if( sum-curr == curr ){
            return true;
        }
        if(memo[i][curr] != -1){
            return memo[i][curr];
        }
        
        if(i == 0 ){
            return curr+nums[0] == sum-nums[0]-curr;
        }
        
       


        //take
        bool x = solve(i-1,nums,sum,curr+nums[i],memo);
        //not take
        bool y = solve(i-1,nums,sum,curr,memo);

        return memo[i][curr] = x || y ;
    }

    bool canPartition(vector<int>& nums) {
        
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
        }
        int n = nums.size()-1;
        vector<vector<int>>memo(n+1,vector<int>(sum+1,-1));
        bool ans = solve(n,nums,sum,0,memo);

        return ans;
    }   
};