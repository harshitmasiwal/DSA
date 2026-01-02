class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        // unordered_map<int,int>temp ;
        // int ans = 0;
        // for(int i = 0 ; i < nums.size() ; i++){
            
        //     if(temp[nums[i]]){
        //         temp[nums[i]] += 1; 
        //     }
        //     else{
        //         temp[nums[i]] = 1;
        //     }
            
        //     if(temp[nums[i]] == 2){
        //         ans = nums[i];
        //     }
        // }
        // return ans;


        //optimised 

        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if(nums[i] == nums[j]){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};