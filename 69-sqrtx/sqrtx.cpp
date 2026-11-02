class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int left = 1, right = x, ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;// as sqrt lie btw 0 to x
            //therefore binary search with condition that mid^2=x
            // Using division instead of mid * mid to prevent integer overflow
            if (mid <= x / mid) {
                ans = mid;      // mid is a valid floor candidate
                left = mid + 1; // Try to find a larger value
            } else {
                right = mid - 1; // mid * mid > x, look in the lower half
            }
        }

        return ans;
    }
};