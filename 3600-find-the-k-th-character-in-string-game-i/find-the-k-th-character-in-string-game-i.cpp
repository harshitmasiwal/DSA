class Solution {
public:
    char kthCharacter(int k) {

        string temp = "a";
        string x ;
        while(temp.size() < k){

            for(int i = 0 ; i < temp.size() ;i++ ){
                if(temp[i] == 'z'){
                    x += 'a';
                }
                else{
                    char c = temp[i]+1;
                    x += c;
                }
            }

            temp+=x;
            x = "";
        }

        return temp[k-1];
        
    }
};