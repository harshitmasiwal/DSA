class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
       //brutforce
    //    int n = nums.size();
    //    for(int i = 0 ; i < n ; i++){
    //     for(int j = i ; j < n ; j++){
    //         for(int k = i ; k < j ; k++){

    //         }
    //     }
    //    }


    //optimal
    int count = 0 ;
    int n = nums.size();
    vector<int>p(n,0);

    p[0] = nums[0];

    for(int i = 1 ; i < n ;i++){
        p[i] =  p[i-1] + nums[i];
    }

    int sum = 0 ;
    unordered_map<int,int>freq;
    freq[0] = 1 ;
    for(int i = 0 ; i < n ; i++){
      sum += nums[i];

      if(freq.count( sum - k )){
        count += freq[sum - k];
      }

      
        freq[sum]++;
      
    }

    return count;
    }
};