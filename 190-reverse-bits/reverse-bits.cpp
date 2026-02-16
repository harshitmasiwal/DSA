class Solution {
public:
    int reverseBits(int n) {

        vector<int>arr;

        while(n != 0 ){
            int x = n%2;
            arr.push_back(x);
            n = n/2;

        }
        int s = arr.size()-1;

        while( s != 31){
            arr.push_back(0);
            s++;
        }

        int ans = 0;
        for(auto it : arr){
            ans += (it*pow(2,s));
            s--;
        }

        return ans;
    }
};