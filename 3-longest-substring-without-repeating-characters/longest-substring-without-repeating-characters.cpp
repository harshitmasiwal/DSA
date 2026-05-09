class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        vector<int>arr(256,0);
        int ans = 0;
        int low = 0 ;
        for(int i = 0 ; i < n ; i++){

            if(arr[s[i]] == 0){
                arr[s[i]]++;
                ans = max(ans,i-low+1);

            }
            else{
                while(arr[s[i]] != 0){
                    arr[s[low]]--;
                    low++;
                }
                arr[s[i]]++;
                ans = max(ans,i-low+1);
            }
            
        }
        
        return ans;
    }
};