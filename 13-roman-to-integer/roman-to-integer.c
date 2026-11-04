int romanToInt(char* s) {
    int total = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        int currentVal;
        switch (s[i]) {
            case 'I': currentVal = 1; break;
            case 'V': currentVal = 5; break;
            case 'X': currentVal = 10; break;
            case 'L': currentVal = 50; break;
            case 'C': currentVal = 100; break;
            case 'D': currentVal = 500; break;
            case 'M': currentVal = 1000; break;
            default: currentVal = 0;
        }
        
        int nextVal = 0;
        if (s[i + 1] != '\0') {
            switch (s[i + 1]) {
                case 'I': nextVal = 1; break;
                case 'V': nextVal = 5; break;
                case 'X': nextVal = 10; break;
                case 'L': nextVal = 50; break;
                case 'C': nextVal = 100; break;
                case 'D': nextVal = 500; break;
                case 'M': nextVal = 1000; break;
            }
        }
        
        // If current value is less than the next value, subtract it
        if (currentVal < nextVal) {
            total -= currentVal;
        } else {
            total += currentVal;
        }
    }
    
    return total;
}