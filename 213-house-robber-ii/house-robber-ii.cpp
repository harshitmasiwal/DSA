class Solution {
public:

      int solve(vector<int>&nums,int i,vector<int>&memo,bool x){

        if(x && i > nums.size()-2){
            return 0;
        }
        
        if( i >= nums.size()){
            return 0;
        }

        if(memo[i] != -1){
            return memo[i];
        }
        //either skip
        int ans1 = solve(nums,i+1,memo,x);
        //either rob
        
        int ans2 = nums[i]+ solve(nums,i+2,memo,x);

        return  memo[i] = max(ans1,ans2);
    }

    int rob(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>memo(n+1,-1);
        int answith1 = solve(nums,0,memo,true);
        memo.assign(n, -1);
        int answith2 = solve(nums,1,memo,false);
        
        return max(answith1,answith2);

    }
};