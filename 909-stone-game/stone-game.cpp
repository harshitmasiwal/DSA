class Solution {
public:

    int solve(int i , int j , vector<int>piles , vector<vector<int>>&memo){

        if(i > j ){
            return 0;
        }

        if(memo[i][j] != -1){
            return memo[i][j];
        }

        //only for alice 

        int ansi = piles[i] + min( solve(i+2, j , piles , memo) , solve(i+1, j-1 ,piles , memo) );
        int ansj = piles[j] + min( solve(i,j-2,piles , memo), solve(i+1,j-1,piles, memo) );

        return memo[i][j] = max(ansi,ansj);
    }

    bool stoneGame(vector<int>& piles) {

        int n = piles.size();

        vector<vector<int>>memo(n+1 , vector<int>(n+1,-1));

        int alice = solve(0,n-1,piles,memo);
        
        int sum = 0 ; 
        for(int i = 0 ; i < n ; i++){
            sum += piles[i];
        }

        if(sum-alice > alice){
            return false;
        }
        
        return true;
    }
};