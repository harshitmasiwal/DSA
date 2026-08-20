class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        vector<int>temp;
        vector<int>temp2;

        temp.push_back(nums[0]);
        temp2.push_back(nums[1]);

        for(int i = 2 ; i < nums.size() ; i++){
            if(temp.back() > temp2.back()){
                temp.push_back(nums[i]);
            }
            else{
                temp2.push_back(nums[i]);

            }
        }

        temp.insert(temp.end(),temp2.begin(),temp2.end());

        return temp ;
    }
};