class Solution {
public:
    bool hasAlternatingBits(int n) {
        int temp = 0 ;
        int flag = 1 ;
        int prev = 0 ;
        while(n!=0){

            temp = n%2;
            n = n/2;

            if(n%2 == temp){
                flag = 0 ;
                break;
            }
        }

       return flag; 
    }
};