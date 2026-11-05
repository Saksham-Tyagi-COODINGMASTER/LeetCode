int compare(const void *a, const void *b) {//criterion maker for the qsort() function
    return (*(int*)a - *(int*)b);//if a-b is +ve the it allows to swap a,b
}

int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    // 1. Sort arr2 using O(M log M) quicksort instead of O(M^2) insertion sort
    qsort(arr2, arr2Size, sizeof(int), compare);
    
    int count = 0;
    
    // 2. Loop through each element in arr1
    for (int i = 0; i < arr1Size; i++) {
        int left = 0;
        int right = arr2Size - 1;
        int isValid = 1; // Assume it's valid until proven otherwise
        
        // 3. Proper binary search for each arr1[i]
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // If we find any element within distance 'd', this arr1[i] is invalid
            if (abs(arr1[i] - arr2[mid]) <= d) {
                isValid = 0;
                break;
            }
            
            // Adjust search window based on the value
            if (arr2[mid] < arr1[i]) {
                left = mid + 1; // Look in the right half
            } else {
                right = mid - 1; // Look in the left half
            }
        }
        
        // If no element in arr2 was within distance 'd', increment our counter
        if (isValid) {
            count++;
        }
    }
    
    return count;
}