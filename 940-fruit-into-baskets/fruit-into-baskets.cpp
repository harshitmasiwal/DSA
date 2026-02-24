class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int,int> fruit_map;
        int ans = INT_MIN;
        int low = 0 ;

        if(fruits.size() < 2 ){
            return fruits.size();
        }


        for(int i = 0 ; i < fruits.size() ;i++ ){

            fruit_map[fruits[i]]++;

            while(fruit_map.size() > 2 ){
                fruit_map[fruits[low]]--;
                if(fruit_map[fruits[low]] == 0 ){
                   fruit_map.erase(fruits[low]);
                }
                low++;
            }

            if(fruit_map.size() <= 2){
                ans = max(ans,i-low+1);
            }
        }
        return ans==INT_MAX?fruits.size():ans;
    }
};