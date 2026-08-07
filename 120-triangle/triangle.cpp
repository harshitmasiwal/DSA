class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();

        vector<int>prev;

        for(int i = 0 ; i < n ; i++){
            //push the last row
            prev.push_back(triangle[n-1][i]);
        }

        //now go from bottom to up

        for(int i = n-2 ; i > -1 ; i--){
            vector<int>curr(n,-1);
            for(int j = i ; j > -1 ; j--){
                int x = triangle[i][j] + prev[j];
                int y = triangle[i][j] + prev[j+1];

                curr[j] = min(x,y); 
            }

            prev = curr;
        }

        return prev[0];
    }
};