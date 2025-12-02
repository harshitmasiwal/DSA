class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        
        bool ans = true;
        unordered_map<char,int>mymap;

        for(int i = 0 ; i < word1.size() ; i++){
            mymap[word1[i]] += 1;
        }
        for(int i = 0 ; i < word2.size() ; i++){
            mymap[word2[i]] -= 1;
        }

        for(auto pair:mymap){
            if( abs(pair.second) > 3){
                ans = false;
            }
            
        }

        return ans;
    }
};