class Solution {
public:
    int findKthNumber(int n, int k) {
        long curr = 1;
        k -= 1; // we've already counted '1' as the first

        while (k > 0) {
            long steps = calculateSteps(n, curr, curr + 1);
            if (steps <= k) {
                // Move to the next prefix
                curr += 1;
                k -= steps;
            } else {
                // Go deeper in the tree (i.e., next level)
                curr *= 10;
                k -= 1;
            }
        }

        return curr;
    }

    long calculateSteps(long n, long first, long last) {
        long steps = 0;
        while (first <= n) {
            steps += min(n + 1, last) - first;
            first *= 10;
            last *= 10;
        }
        return steps;
    }
};
