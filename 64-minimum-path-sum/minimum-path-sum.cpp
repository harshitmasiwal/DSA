class Solution {
public:

    int solve(int i , int j , vector<vector<int>>& grid , vector<vector<int>>&memo ){

        if(i >= grid.size() || j >= grid[0].size() ){
            return 100000;
        }

        if( i == grid.size()-1 && j == grid[0].size()-1 ){
            return grid[i][j];
        }

        if(memo[i][j] != -1){
            return memo[i][j];
        }

        int down = grid[i][j] + solve(i+1,j,grid,memo);
        int right = grid[i][j] + solve(i,j+1,grid,memo);

        return memo[i][j] = min(down,right);
    }

    int minPathSum(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>memo(m+1,vector<int>(n+1,-1));
        int ans = solve(0,0,grid,memo);

        return ans;
        
    }
};