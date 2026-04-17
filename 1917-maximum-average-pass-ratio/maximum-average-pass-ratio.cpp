class Solution {
public:

    struct sortfun {
        bool operator()(const vector<int>& a, const vector<int>& b){

            double gainA = ((double) (a[0]+1)/(a[1]+1) - ((double) a[0]/a[1]) );
            double gainB = ((double) (b[0]+1)/(b[1]+1) - ((double) b[0]/b[1]) );
            return gainA < gainB;
    }
    };
    

    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {

        priority_queue<vector<int> , vector<vector<int>> , sortfun >pq(classes.begin(),classes.end());

        while(extraStudents){
            vector<int>temp = pq.top();
            temp[0] += 1;
            temp[1] += 1;
            pq.pop();

            extraStudents--;
            pq.push(temp);
        }
        
        double ans = 0 ;
        
        while(!pq.empty()){
            ans +=  (double)pq.top()[0]/ pq.top()[1];
            pq.pop();
        }

        return ans/classes.size();
    }
};