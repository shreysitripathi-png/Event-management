class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long i=1;
        while(i<n){
            i=i*2;

        }
        return i==n;
    }
};