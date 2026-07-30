class Solution {
public:
    int minimumPushes(string word) {


        vector<int>arr(26,0);

        for(int i = 0 ; i < word.size() ; i++){
            arr[word[i] - 97] += 1;
        }
        
        sort(arr.begin(),arr.end(),greater<int>());

        int ans = 0;
        for(int i = 0 ;i < 8 ; i++){
            ans += arr[i];
        }

        for(int i = 8 ;i < 16 ; i++){
            ans += arr[i]*2;
        }

        for(int i = 16 ;i < 24 ; i++){
            ans += arr[i]*3;
        }

        for(int i = 24 ;i < 26 ; i++){
            ans += arr[i]*4;
        }


        return ans;

    }
};