class Solution {
public:
    set<int>ans;
    void solve(vector<int>&map , int pos , int curr){

        if(pos == 3  ){
            ans.insert(curr);
            return ;
        }

        for(int i = 0 ; i < 10 ; i++){
            if(map[i] == 0 ){
                continue;
            }

            if( i == 0 && pos == 0) continue;

            if( pos == 2 && i%2 != 0 ) continue;

            //abb find karo next
            map[i]--;
            solve(map , pos+1 , curr * 10 + i  );
            map[i]++;
        }

        return ;

    }
    int totalNumbers(vector<int>& digits) {

        vector<int>map(10,0);
        for(int i = 0 ; i < digits.size() ;i++){
            map[digits[i]]++;
        }
        solve(map, 0, 0 );

        return ans.size();
        
    }
};