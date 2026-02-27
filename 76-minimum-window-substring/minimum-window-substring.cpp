class Solution {
public:
    string minWindow(string s, string t) {

        int ans = INT_MAX;
        int low = 0;
        vector<int>freqS(256,0);
        vector<int>freqT(256,0);
        int count = 0 ;
        int start = 0 ;

       

        for(int i = 0 ; i < t.size() ; i++ ){
            freqT[t[i]]++; 
        }

        for(int high = 0 ; high < s.size() ; high++){
             
            freqS[s[high]]++;

            if( freqS[s[high]] <= freqT[s[high]]){
                count++;
            }
            
            while(count == t.size()){

                if(high - low + 1 < ans ){
                    ans = high - low + 1;
                    start = low ; 
                }

                freqS[s[low]]--;

                if(freqS[s[low]] < freqT[s[low]]){
                    count--;
                }
                
                low++;
            }

        }
        
        return ans == INT_MAX ? "" : s.substr(start,ans);
    }
};