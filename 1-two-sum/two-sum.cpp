class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>ans;
        int x;
        unordered_map<int,int>mp ;

        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]] = i;
        }

        for(int i = 0 ; i < nums.size() ; i++){
            x = target - nums[i];
            if(mp[x] && mp[x]!=i){
                ans.push_back(i);
                ans.push_back(mp[x]);
                return ans;
            }
        }
        
        return ans;
    }
};