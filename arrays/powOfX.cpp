class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long m = n;
        if(m<0) m = -1*m;
        while(m) {
            if(m % 2) {
                ans = ans * x;
                m = m -1;
            } else {
                x*=x;
                m/=2;
            }
        }
        if(n<0) ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};

// 2^4 = 16 
// 1+2+3+4 
