class Solution {
public:
    string smallestPalindrome(string s) {

        int n = (s.size()/2);

        if(n < 0) return s;
        if(s.size() <= 3) return s;

        if( s.size()%2 == 1){
            sort(s.begin(),s.begin()+n);
            sort(s.begin()+n+1,s.end(),greater<char>());
        }
        else{
            sort(s.begin(),s.begin()+n);
            sort(s.begin()+n,s.end(),greater<char>());
        }

        return s;
        
    }
};