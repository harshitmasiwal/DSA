class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int p = 0 ;

        for(int i = p+1; i < nums.size() ; i++){
            if(nums[p] != nums[i]){
                nums[p+1] = nums[i];
                p++;
            }
        } 
        
        return p+1;
    }
};