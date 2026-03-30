class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char,char>mp;
        mp['('] = ')';
        mp['{'] = '}';
        mp['['] = ']';

        stack<char>st;
        if(!mp.count(s[0])){
            return false;
        }
        else{
            st.push(s[0]);
        }

        for(int i = 1 ; i < s.size();i++){

            if(!st.empty() && mp[st.top()] == s[i] ){
                st.pop();
                continue;
            }
            else{
                st.push(s[i]);
            }
          
        }
        
        if(st.empty()){
            return true;
        }
        return false;
    }
};