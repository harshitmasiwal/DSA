class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int count = 0;
        int s = flowerbed.size();
        int window = 0;

        if(n == 0) return true;
        if(s == 1 && flowerbed[0] == 0){
            n--;
            if(n == 0 ) return true;
        }
        
        int a = 0  , b = 1 , c = 2 ;

        if( s >= 2){

            if(flowerbed[1] == 0 && flowerbed[0] == 0 ){
                flowerbed[0] = 1;
                n--;
                if(n == 0 ) return true;
             }

            if(flowerbed[s-1] == 0 && flowerbed[s-2] == 0 ){
                flowerbed[s-1] = 1;
                n--;
                if(n == 0 ) return true;
            }

        }
        

        while( c < s){
            
            if(flowerbed[a] + flowerbed[b] + flowerbed[c] == 0){
                n--;
                flowerbed[b] =1 ;
            } 

            a += 1;
            b += 1; 
            c += 1;

            if(n == 0 ){
                return true;
            }

        }

        return false;
    }
};