class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int min = nums[0];
        int max = nums[nums.size()-1];

        int j = 0 ;
        vector<int>ans;
        for(int i = min ; i <= max ; i++){
            if(j < nums.size() && nums[j] != i ){
                ans.push_back(i);
                j--;
            }
            j++;
        }
        
        return ans;
    }
};