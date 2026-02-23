class Solution {
public:
    bool hasAllCodes(string s, int k) {

        set<string>temp;    

        if(s.length() < k) return false;

        string t = "";
        int max = pow(2,k);

        for(int i = 0 ; i < k ; i++){
            t+=s[i];
        }
        
        temp.insert(t);

        for(int i = k ; i < s.length() ; i++ ){
            
            if(temp.size() >= max){
                return 1;
            }

            t.erase(0,1) ;
            t += s[i];
        
            
                temp.insert(t);
            
        }

      

        return temp.size() == max;
    }
};