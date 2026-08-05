class Solution {
public:

    

    int solve(int i , int j , vector<vector<int>>& obstacleGrid , vector<vector<int>>&memo ){

        int ans = 0 ;

        if(i >= obstacleGrid.size() || j >= obstacleGrid[0].size() ){
            return 0;
        }

        if(i == obstacleGrid.size()-1 && j == obstacleGrid[0].size()-1 &&  obstacleGrid[i][j] != 1){
            return 1;
        }

        if(memo[i][j] != -1){
            return memo[i][j];
        }

        if(obstacleGrid[i][j] == 1){
            return 0;
        }   

        ans += solve(i+1,j,obstacleGrid,memo);
        ans += solve(i,j+1,obstacleGrid,memo);

        return memo[i][j] = ans;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>memo(m,vector<int>(n,-1));
        int ans = solve(0,0,obstacleGrid,memo);

        return ans;
        
    }
};