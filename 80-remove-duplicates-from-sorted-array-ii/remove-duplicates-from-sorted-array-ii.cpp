class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size() < 2 ) return nums.size();

        bool flag = 0;
        int p = 0;

        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == nums[p] && flag == 0 ){
                nums[p+1] = nums[i];
                p++;
                flag = 1;
            }
            else if(nums[i] > nums[p]){
                flag = 0;
                nums[p+1] = nums[i] ;
                p++;
            }
            else{
                
            }
        }

        return p+1;
    }
};