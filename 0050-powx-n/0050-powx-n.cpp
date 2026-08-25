class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        
        if (power < 0) {
            x = 1.0 / x;
            power = -power;
        }
        
        double result = 1.0;
        
        while (power > 0) {
            if (power % 2 != 0) {
                result *= x;
                power -= 1;
            }
            
            x *= x;
            power /= 2;
        }
        
        return result;
    }
};