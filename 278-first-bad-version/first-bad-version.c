// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int left = 1;
    while (left < n) {
        int mid = left + (n - left) / 2;
        if (isBadVersion(mid)) {
            n = mid; //as can be more bad versions before it
        } else {
            left = mid + 1; 
        }
    }
    return left; 
}