class Solution {
public:
    int climbStairs(int n) {
    if(n==1){return 1;}
    if(n==2){return 2;}
    int prev2 = 1; // Ways to reach step 1
    int prev1 = 2; // Ways to reach step 2
    int current = 0;
    for(int i = 3; i <= n; i++){
        current = prev1 + prev2; // let n=4, this line shows ways to get to n=3
        prev2 = prev1;          //here this becones ways to reach 4 from 2
        prev1 = current;       //this shows the ways to get to 4 from 3 as only 1 step is need therefore ways to go to 3 is same as ways to go to 4
    }return current;
    }
};