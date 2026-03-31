class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        int n = t.size()-1;
        vector<int>ans(n+1,0);

        stack<int>st;

        for(int i = n ; i >= 0 ; i--){
            
            while(!st.empty() && t[i] >= t[st.top()] ){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top() - i;
            }

            st.push(i);
        }

        return ans;
    }
};