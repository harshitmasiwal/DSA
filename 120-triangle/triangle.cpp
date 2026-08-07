class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

        for(int j = 0 ; j < n ; j++){
            dp[n-1][j] = triangle[n-1][j];
        }

        //after filling last row now go upwards

        for(int i = n-2 ; i > -1 ; i--){

            for(int j = i ; j > -1 ; j--){

                int x = triangle[i][j] + dp[i+1][j+1];
                int y = triangle[i][j] + dp[i+1][j];

                dp[i][j] = min(x,y);
            }
        }
        
        return dp[0][0];
    }
};