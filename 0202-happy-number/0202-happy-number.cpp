#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n != 1) {
            if (seen.count(n)) {
                return false; // Found a cycle
            }
            seen.insert(n);
            n = getNext(n);
        }
        
        return true; // Reached 1, it's a happy number
    }

private:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10; // Get last digit
            totalSum += digit * digit; // Square the digit and add to total
            n /= 10; // Remove last digit
        }
        return totalSum;
    }
};
