class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        vector<vector<int>>res;
        int n = firstList.size();
       
        int m = secondList.size();
        for(int j = 0 ; j < n ; j++){

            
            int startA = firstList[j][0]; 
            int endA = firstList[j][1];
        
        for(int i = 0 ; i < m ;i++){
            int startB = secondList[i][0]; 
            int endB = secondList[i][1];
            if(endA < startB || endB < startA){
                continue;
            }

           
            
            int start_R = max(startA,startB);
            int end_R = min(endA,endB);

            res.push_back({start_R,end_R});
        }

        }

        return res;
    }
};