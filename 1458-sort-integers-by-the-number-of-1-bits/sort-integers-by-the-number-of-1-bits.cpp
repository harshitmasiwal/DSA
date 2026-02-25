class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<int>ans;
        for(int i = 0 ; i < arr.size() ;i++){
            ans.push_back(__builtin_popcount(arr[i]));
        }
        //sort array ans with arr
        for(int i = 0 ; i < ans.size() ;i++ ){
            for(int j = i+1 ; j < ans.size() ; j++){
                if(ans[i] > ans[j]){
                    swap(arr[i],arr[j]);
                    swap(ans[i],ans[j]);
                }
                else if(ans[i] == ans[j]){
                    if(arr[i] > arr[j]){
                        swap(arr[i],arr[j]);
                    }
                }
            }
        }
        return arr;
    }
};