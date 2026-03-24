class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int ans = 0;
        unordered_map<int,int>mp;
        // mp[0] = -1 ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++){

            if(nums[i] == 0) sum += -1;
            else sum += 1;
            if(sum==0)ans=i+1;
            if(mp.count(sum)){
                ans = max(ans,i-mp[sum]);
            }
            else{
                mp[sum] = i ;
            }
            
        }
        
        return ans;
    }
};