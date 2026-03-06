class Solution {
public:
    bool checkOnesSegment(string s) {

        bool flag = 1;

        for(int i = 1 ; i < s.size() ; i++){
            if(s[i-1] == '0' && s[i] == '1'){
                flag = 0 ;
                return flag ;
            }
        }
        return flag;
    }
};