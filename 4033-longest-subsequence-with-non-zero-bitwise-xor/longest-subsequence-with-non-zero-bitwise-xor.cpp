class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        
        bool flag = false;
        int xorsum = nums[0];
        int n =  nums.size();

        for(int i = 1 ; i < n ; i++){
            if(nums[i] != 0) flag = true;
            xorsum = xorsum^nums[i];
        }

        if(xorsum == 0 && flag == true) return n-1;
        if(xorsum == 0 && flag == false) return 0;

        return n;
        
    }
};