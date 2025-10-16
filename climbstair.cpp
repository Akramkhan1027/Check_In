class Solution {
public:
    int climbStairs(int n) {
        int a = 1; // ways to climb 1 step
        int b = 2; // ways to climb 2 steps
        int answer = 0;
        
        // Base cases
        if (n == 1) return a;
        if (n == 2) return b;
        
        // Compute ways from step 3 to n
        for (int i = 3; i <= n; i++) {
            answer = a + b; // ways to current step = sum of previous two steps
            a = b;          // shift left
            b = answer;     // update right to current answer
        }
        return answer;
    }
};
