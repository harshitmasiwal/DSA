class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        

        int x = 0;
        int y = 0;

        while(x < nums1.size() && y < nums2.size()){
            
            if(nums1[x] == nums2[y]) return nums1[x];

            if(nums1[x] < nums2[y]){
                x++;
            }
            else{
                y++;
            }

        }

        return -1;
    }
};