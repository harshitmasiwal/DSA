class Solution {
public:
    vector<string>ans;

    void solve(int o , int c , string curr , int n){
        
        if( o > n || c > n ){
            return ;
        }

        if( o == n && c == n ){
            ans.push_back(curr);
            return ;
        }
        solve(o+1,c,curr+"(",n);
        if(o < c){
            solve(o+1,c,curr+"(",n);
        }
        if(c < o){
            solve(o,c+1,curr+")",n);
        }
       
        return ;
    }
    
    vector<string> generateParenthesis(int n) {
        string a = "";
        solve( 0 , 0 , a , n);

        return ans;

    }
};