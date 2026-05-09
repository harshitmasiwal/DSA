class Solution {
public:
    string reverseWords(string s) {

        int n = s.size();
        string ans = "";
        string x = "";
        for(int i = 0 ; i < n ; i++){
        
        
           while(s[i] != ' ' || (s[i] != ' ' && i == n-1 )){
            if( i < n){
                 x+=s[i];
                i++;
            }
            else{
                break;
            }
           
           }
        
           //when a new word come add space and add it
            if(ans == "" && x != ""){
                ans += x;
            }
            else if(x != ""){
                ans = " " + ans;
                ans = x + ans;
            }

           x = "";
        }
        
        return ans;
    }
};