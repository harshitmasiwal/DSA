class Solution {
public:
    int maximumLengthSubstring(string s) {

        int ans = INT_MIN;
        vector<int>arr(26,0);

        
        int low =  0 ;

        for(int i = 0 ; i < s.size() ; i++){

            while(arr[s[i]-'a'] >= 2){
                arr[s[low] - 'a']--;
                low++;
            }

            arr[s[i] - 'a']++;
            

            ans = max(ans,i-low+1);

        }
        return ans;
    }
};