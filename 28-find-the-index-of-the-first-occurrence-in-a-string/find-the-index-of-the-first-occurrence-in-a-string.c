int strStr(char* haystack, char* needle) {
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);
    
    // If needle is empty, return 0 (standard behavior for strstr)
    if (needle_len == 0) {
        return 0;
    }
    
    // If needle is longer than haystack, it can't be a substring
    if (needle_len > haystack_len) {
        return -1;
    }
    
    // Iterate through the haystack
    for (int i = 0; i <= haystack_len - needle_len; i++) {
        int j;
        // Check if the substring matches the needle
        for (j = 0; j < needle_len; j++) {
            if (haystack[i + j] != needle[j]) {
                break; // Mismatch found, break the inner loop
            }
        }
        
        // If we reached the end of the needle, we found a match
        if (j == needle_len) {
            return i; // Return the starting index
        }
    }
    
    // If no match is found, return -1
    return -1;
}