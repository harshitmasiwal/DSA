class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size() < 2 ){
            return strs[0];
        }
        
        int ans = INT_MAX;
        string s = strs[0];
        int j = 0 ;
        for(int i = 1 ; i < strs.size() ; i++){
           for(j = 0 ; j < strs[i].size() && j < s.size() ; j++){
            if(s[j] != strs[i][j]){
                break;
            }
           }
            ans = min(ans , j );
        }
        string t = s.substr(0,ans) ;

        return t;
    }
};