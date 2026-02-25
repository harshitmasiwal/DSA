class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0 ;
        int right = 0 ; 
        int ans = 0;
        bool arr[128] = {0};

        for(right = 0 ; right < s.size() ; right++){

            while(arr[s[right]] == 1 ){
                arr[s[left]] = 0 ;
                left++;
            }
            
            arr[s[right]]=1;

            ans = max(ans,right-left+1);
        }

        return ans;
    }   
};