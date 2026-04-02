class Solution {
public:
    int maxNumberOfBalloons(string text) {

        int arr[26] = {0};

        for(int i = 0 ; i < text.size() ;i++){
            arr[text[i] - 'a']++;
        }

        int ans = INT_MAX;
        
        ans = min(ans,arr[0]);
        ans = min(ans,arr[1]);
        ans = min(ans,arr[13]);

        if(!(arr[14] >= ans*2 && arr[11] >= ans*2 )){
            ans = min(ans,arr[14]/2);
            ans = min(ans,arr[11]/2);

        }
        
        return ans;
    }
};