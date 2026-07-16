#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        long long sum{};
        int *prefixGcd = new int[n]{};
        int current_max = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] > current_max) {
                current_max = nums[i];
            }
            prefixGcd[i] = gcd(nums[i],current_max);
        }
        sort(prefixGcd, prefixGcd+n);
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            sum+=gcd(prefixGcd[i], prefixGcd[j]);
        }
        delete[] prefixGcd;
        return sum;
    }
};

int main() {
    vector<int> v = { 2,6,4 };
    cout << Solution().gcdSum(v) << endl;
}