class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int freq[3] = {0};

        for(int i = 0 ; i < nums.size() ;i++){
            freq[nums[i]]++;
        }
        int j = 0 ;
       
        while(freq[0]){
            nums[j] = 0;
            j++;
            freq[0]--;
        }
        while(freq[1]){
            nums[j] = 1;
            j++;
            freq[1]--;
        }
        while(freq[2]){
            nums[j] = 2;
            j++;
            freq[2]--;
        }
        
    }
};