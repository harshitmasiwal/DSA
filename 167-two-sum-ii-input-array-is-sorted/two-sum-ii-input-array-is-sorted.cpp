class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
        int len = arr.size();
        int start = 0 , end = len-1;
        vector<int>ans;

        while(start < end ){
            if(arr[start] + arr[end] == target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(arr[start] + arr [end] > target){
                end-- ;
            }
            else {
                start++;
            }
        }
        return ans ;
    }
};