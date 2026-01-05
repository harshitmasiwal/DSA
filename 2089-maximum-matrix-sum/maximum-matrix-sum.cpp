class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        long sum = 0 ; 
        long count = 0 ;
        long m = matrix.size();
        long n = matrix[0].size();
        long smallest = LONG_MAX;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){

                if(matrix[i][j] < 0){
                    count++;
                }
                long val = abs(matrix[i][j]);
                smallest = min(smallest,val);
                sum += val;
            }
        }

        if(count % 2 == 0) return sum ;
        
        return sum-smallest*2;
    }
};