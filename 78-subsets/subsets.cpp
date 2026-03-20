class Solution {
public:

    vector<vector<int>>find(int idx , vector<int>&nums , vector<int>&temp , vector<vector<int>>&ans){
        ans.push_back(temp);
        
        for(int i = idx ; i < nums.size() ; i++){
            
            temp.push_back(nums[i]);

            find( i+1 , nums , temp , ans);

            temp.pop_back();
        }

        return ans;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        find(0 , nums , temp, ans);
        
        return ans;
    }
};