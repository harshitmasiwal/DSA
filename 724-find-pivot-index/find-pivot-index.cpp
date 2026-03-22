class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();
        vector<int>p(n,0);
        vector<int>s(n,0);

        //calc prefix
        for(int i = 1 ; i < n ; i++){
            p[i] = p[i-1] + nums[i-1];
        }
        //calc suffix 
        for(int i = n-2 ; i >= 0 ; i--){
            s[ i ] = s[i+1] + nums[i+1];
        }   
        
        for(int i = 0 ; i < n ; i++){
            if(p[i] == s[i]){
                return i;
            }
        }

        return -1;
    }
};