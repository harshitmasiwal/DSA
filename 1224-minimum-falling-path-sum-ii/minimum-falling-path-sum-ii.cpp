class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {

        int n = grid.size();

        vector<vector<int>>memo(n,vector<int>(n,0));
        
        for(int j = 0 ; j < n ; j++){
            memo[0][j] = grid[0][j];
        }


        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){

                int prev_min = INT_MAX ;
                for(int k = 0 ; k < n ; k++){
                    if( k != j ){
                        prev_min = min(prev_min,memo[i-1][k]);
                    }
                }

                memo[i][j] = grid[i][j] + prev_min;
            }
        }

        int ans =   INT_MAX ;

      
            for(int j = 0 ; j < n ; j++){
                ans = min(ans,memo[n-1][j]);
            }
        
        return ans;
    }
};