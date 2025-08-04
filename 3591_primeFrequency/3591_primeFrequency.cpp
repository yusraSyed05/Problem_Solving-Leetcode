// Check if Any Element Has Prime Frequency

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; ++i)
            if (n % i == 0) return false;
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        for (auto& [key, count] : freq) {
            if (isPrime(count)) return true;
        }

        return false;
    }
};
