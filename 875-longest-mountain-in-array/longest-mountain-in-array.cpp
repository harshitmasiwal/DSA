class Solution {
public:
    int longestMountain(vector<int>& arr) {

        int ans = 0 ;
        int count ;
        bool flag = false;


        for(int i = 1; i < arr.size() ;i++){

            int j = i ;
            count = 1;
            flag = false;

            //count inc one 
            while( j < arr.size() && arr[j-1] < arr[j] ){
                count++;
                j++;
            }
            //count dec one
            
            while( i!= j && j < arr.size() && arr[j-1] > arr[j]){
                count++;
                j++;
                flag = true;
            }
            
            //update max only when the size of count is 3 or more for forming a mountain
            if( i != j && flag  && count > 2){
                ans = max(ans,count);
                j--;
             }
            }
        
        return ans;
    }
};