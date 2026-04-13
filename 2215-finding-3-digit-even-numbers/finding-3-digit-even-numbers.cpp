class Solution {
public:
    vector<int>ans;
    void solve(int pos , vector<int>&digits, long long curr , vector<int>&map){

        if(pos == 3 ){
            ans.push_back(curr);
            return;
        }


        for(int i = 0 ; i < 10 ; i++){

            if(map[i] == 0) continue;

            if( i == 0 && pos == 0) continue;

            if( pos == 2 ){
                //check if i is even or not 
                if(i % 2 != 0 ) continue;
            }

            //nahi to find the all possible combination


                map[i]--;

                solve(pos+1,digits,curr * 10 + i , map);

                map[i]++;
            

        }

        return ;

    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>map(10,0);
        for(int i = 0 ; i < digits.size() ;i++){
            map[digits[i]]++;
        }
        solve(0 , digits , 0 , map);
        return ans;
    }
};