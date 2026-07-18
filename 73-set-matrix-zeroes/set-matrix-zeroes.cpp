class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> rows(m,0);
        vector<int> cols(n,0);


        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){

                if(matrix[i][j] == 0 ){
                    rows[i] = 1 ; 
                    cols[j] = 1 ;
                }
            }
        }

        for(int x = 0 ; x < m ; x++){
            if(rows[x] == 1){
            
                for(int j = 0 ; j < n ; j++){
                    matrix[x][j] = 0 ;
                }
        
            }
        }

        for(int x = 0 ; x < n ; x++){
            if(cols[x] == 1){
                for(int i = 0 ; i < m ; i++){
                
                    matrix[i][x] = 0 ;
                }
            }
            
        }



    }
};