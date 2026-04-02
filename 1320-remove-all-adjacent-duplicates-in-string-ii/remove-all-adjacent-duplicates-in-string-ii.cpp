class Solution {
public:
    string removeDuplicates(string s, int k) {


        stack<pair<char,int>>st;
        int t = k -1;

        for(int i = 0 ; i < s.size() ; i++){
            
            if(st.empty()){
                st.push({s[i] , 1});
                continue;
            }

            if(!st.empty() && st.top().first == s[i]){
                if(st.top().second == k-1){
                    while(t){
                        st.pop();
                        t--;
                    }
                    t = k-1;
                }
                else{
                    st.push(st.top());
                    st.top().second++;
                }
            }
            else{
                st.push({s[i] , 1});
            }


        }
        

        string ans;

        while(!st.empty()){
            ans += st.top().first;
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};