class Solution {
public:
    int hammingWeight(int n) {

        int bits = __builtin_popcount(n);
        return bits;
        
    }
};