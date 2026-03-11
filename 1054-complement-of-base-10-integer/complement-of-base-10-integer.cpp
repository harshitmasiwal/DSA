class Solution {
public:
    int bitwiseComplement(int n) {
        
        int num = n ;
        int rem ,dec = 0 , mul = 1 ;
        
        if(num == 0 ) return 1 ;
        while(num != 0){

            // if(dec > INT_MAX/10 ) return 0 ; no need for this 
            rem = num % 2 ;
            if(rem == 1){
                dec = dec + 0 * mul ;
                mul = mul * 2  ;
            }
            if(rem == 0){
                dec = dec + 1 * mul ;
                mul = mul * 2 ;
            }
            num = num / 2 ;
        }
        return dec ;

    }
};