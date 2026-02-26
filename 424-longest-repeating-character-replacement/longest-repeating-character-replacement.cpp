class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int>arr(26,0);
        int low = 0  ;
        int ans = 0 ;
        int maxfreq = 0 ;

        for(int high = 0 ; high < s.size() ; high++){

            arr[s[high]-'A']++;
            maxfreq = max(maxfreq,arr[s[high]-'A']);

            while(high - low + 1 - maxfreq > k ){
                arr[s[low]-'A']--;
                maxfreq = 0 ;
                low++;
                for(int i = 0 ; i < 26 ; i++){
                    maxfreq = max(maxfreq,arr[i]);
                }

            }
         
            if(high - low +1 - maxfreq  <= k ){
                ans = max(ans , high-low+1);
            }
        }
        return ans;
    }
};