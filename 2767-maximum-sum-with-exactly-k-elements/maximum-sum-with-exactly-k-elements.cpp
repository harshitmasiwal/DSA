class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {

        int ans = 0 ;
        int x = *max_element(nums.begin(),nums.end());

        while(k){
           ans += x;
           x++;
           k--; 
        }
        
        return ans;
    }
};