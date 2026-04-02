class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char,int>mp;
        bool odd = 0 ;

        for(int i = 0 ; i < s.size() ;i++){
            mp[s[i]]++;
        }

        int ans = 0 ;

        if(mp.size() ==1  ) return s.size();

        for(auto [key,value] : mp){
            if(mp[key] % 2 == 0 ){
                ans += mp[key];
            }
            else{
                ans += mp[key]-1;
                odd = 1;
            }
        }
        
        return odd+ans;
    }
};