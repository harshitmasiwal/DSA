class Solution {
public:
    string reverseWords(string s) {

        vector<string>temp;

        int prev = 0;
        string x = "" ;
        for(int i = 0 ; i < s.size() ;i++){

            if(s[i] != ' ' && i == s.size()-1 ){
                x+= s[i];
                temp.push_back(x);
                break;
            }

            if(s[prev] != ' ' && s[i] == ' '){
                temp.push_back(x);
                x = "";
            }            
            
            if(s[prev] == ' ' && s[i] != ' '){
                x+=s[i];
            }
            else if(s[prev] != ' ' && s[i] != ' '){
                x+=s[i];
            }

            if(s[i] == ' ') {
                prev = i;
                x = "";
                continue;
            }

            prev = i;
        }
        
        string ans ;

        for(int i = temp.size()-1 ; i >= 0 ; i--){
            ans += temp[i];
            if(i != 0) ans+= " ";
        }

        return ans;
    }
};