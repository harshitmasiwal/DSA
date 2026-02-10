class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());

        int s = nums1.size();

        if(s%2 != 0){
            return nums1[(s/2)];
        }
        else{
            float ans = (float(nums1[(s/2)-1] + nums1[s/2])/2);
            return ans;
        }

    }
};