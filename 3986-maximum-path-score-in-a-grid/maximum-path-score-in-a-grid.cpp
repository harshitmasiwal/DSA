class Solution {
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();

        k = min(k, n + m);

        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k+1, -1)));

        int startCost = (grid[0][0] == 2 ? 1 : grid[0][0]);
        if(k >= startCost) dp[0][0][k - startCost] = grid[0][0];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                for(int rem = 0; rem <= k; rem++){

                    if(dp[i][j][rem] == -1) continue;

                    int val = dp[i][j][rem];

                    // down
                    if(i+1 < n){
                        int cost = (grid[i+1][j] == 2 ? 1 : grid[i+1][j]);
                        if(rem >= cost){
                            dp[i+1][j][rem - cost] = max(
                                dp[i+1][j][rem - cost],
                                val + grid[i+1][j]
                            );
                        }
                    }

                    // right
                    if(j+1 < m){
                        int cost = (grid[i][j+1] == 2 ? 1 : grid[i][j+1]);
                        if(rem >= cost){
                            dp[i][j+1][rem - cost] = max(
                                dp[i][j+1][rem - cost],
                                val + grid[i][j+1]
                            );
                        }
                    }
                }
            }
        }

        int ans = -1;
        for(int rem = 0; rem <= k; rem++){
            ans = max(ans, dp[n-1][m-1][rem]);
        }

        return ans;
    }
};