class Solution {
public:
    
    set<vector<int>>find(int idx , vector<int>&nums , vector<int>&temp , set<vector<int>>&s){
        s.insert(temp);

        for(int i = idx ; i < nums.size() ; i++){
            temp.push_back(nums[i]);

            find(i+1 , nums , temp , s);

            temp.pop_back();
        }

        return s;
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<int>temp;

        find( 0 , nums , temp , s) ;

        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
        
    }
};