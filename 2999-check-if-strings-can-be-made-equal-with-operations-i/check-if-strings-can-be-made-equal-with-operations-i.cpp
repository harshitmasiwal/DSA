class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string t1 = s1; 
        swap(t1[0],t1[2]);
        string t2 = s1;
        swap(t2[1],t2[3]);

        string x1 = s2; 
        swap(x1[0],x1[2]);
        string x2 = s2;
        swap(x2[1],x2[3]);

        if(t1 == x1 || t1 == x2 || t2 == x2 || t2 == x1 || s1 == x1 || s1 == x2 || s2 == t1 || s2 == t2){
            return true;
        }

        return false;
    }
};