class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>>ans;
        unordered_map<string,vector<int>>mp;

        for(int i = 0 ; i < strs.size() ;i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());

            mp[temp].push_back(i); 
        }

        for(auto it : mp ){
            vector<string>x;
            for(int i = 0 ; i < it.second.size() ; i++){
                x.push_back(strs[it.second[i]]);
            }
            ans.push_back(x);
        }

        return ans;
    }
};