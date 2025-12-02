class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;  // no carry, done
            }
            digits[i] = 0;  // set to 0 and continue carry
        }

        // If all digits were 9 → we need extra 1 at front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};