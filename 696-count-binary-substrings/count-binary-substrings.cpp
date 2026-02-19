class Solution {
public:
    int countBinarySubstrings(string s) {

        int n = s.length();
        int curr = 1 ;
        int prev = 0 ;
        int ans = 0 ;

        for(int i = 1 ; i < n ; i++){
            if(s[i-1] == s[i]){
                curr++;
            }
            else{
                ans += min(prev,curr);

                prev = curr;
                curr = 1;

            }

        } 

        return ans + min(prev,curr);
        
        
    }
};