class Solution {
public:

    int solve(int i , int j , vector<int>&nums){

        if( i > j ){
            return 0;
        }

        
        int ansx = 0 ;
        int ansy = 0 ; 

        
        
        ansx = nums[i] + min( solve(i+2 , j , nums) , solve(i+1,j-1,nums) );
        
        ansy = nums[j] + min( solve(i , j-2 , nums) , solve(i+1 , j-1 , nums));
    

        return max(ansx,ansy);
    }

    bool predictTheWinner(vector<int>& nums) {
        
        int n = nums.size()-1;
        int p1 = solve(0,n,nums);

        int sum = 0 ;
        for(int i = 0 ; i <= n ; i++){
            sum += nums[i];
        }

        if(sum-p1 > p1){
            return false;
        }
        
        return true;

    }
};