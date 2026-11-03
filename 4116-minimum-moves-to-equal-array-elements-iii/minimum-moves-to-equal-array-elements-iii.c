int minMoves(int* nums, int numsSize) {
    if (numsSize <= 1) return 0;//non negative numbers
    
    // Step 1: Find the maximum element in the array
    int max_val = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > max_val) {
            max_val = nums[i];
        }
    }
    
    // Step 2: Calculate the total moves to bring all elements up to max_val
    int total_moves = 0;
    for (int i = 0; i < numsSize; i++) {
        total_moves += (max_val - nums[i]);//checks how much less it is as diff=number of moves required
    }
    
    return total_moves;
}