class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {

        unordered_map<int,bool>mp;
        int n = ranges.size();
        for( int i = 0 ; i < n ; i++){
            for(int j = ranges[i][0] ; j <= ranges[i][1] ; j++){
                mp[j] = 1;
            }
        }

        //check 
        bool ans = 1 ;
        for(int i = left ; i <= right ; i++ ){
            if(!mp.count(i)){
                ans = 0;
                break;
            }
        }
        return ans;
    }
};