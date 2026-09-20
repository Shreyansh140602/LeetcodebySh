class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i = 0; i< s.length(); i++){
            int reversevalue = 'z' - s[i] + 1;
            ans += (i+1) * reversevalue;
        }
        return ans;
    }
};