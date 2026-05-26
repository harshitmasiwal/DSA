class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        //using sliding window

        //calc at most goal

        int x = 0 ;
        int s = 0;
        int l = 0 ;
        for(int i = 0; i < nums.size() ; i++){
            s += nums[i];

            while(s > goal){
                s -= nums[l];
                l++;
            }

            x += (i - l +1);
        }

        //calc at most goal-1

        int y = 0 ;
        s = 0;
        l = 0 ;
        for(int i = 0; i < nums.size() ; i++){
            s += nums[i];

            while(s > goal-1 ){
                s -= nums[l];
                l++;
                if(goal <= 0) break;
            }

            y += (i - l +1);
        }
        
        return x-y;
    }
};