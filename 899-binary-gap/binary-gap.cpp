class Solution {
public:
    int binaryGap(int n) {

        int ans = 0 ;
        int curr = 0 ;
        bool flag = 0 ;

        while( n != 0 ){

            int temp = n%2;
            
            if(flag == 1 ) curr++;

            if(flag == 1 && temp == 1 ){
                ans = max(ans,curr);
                curr = 0;
            }

            if(temp == 1 ){
                flag = 1; 

            }
           
            n = n/2;
        }
        
        return ans;
    }
};