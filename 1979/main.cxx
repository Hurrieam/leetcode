#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        auto it = nums.begin(), jt = nums.end();
        return gcd(*min_element(it,jt),*max_element(it,jt));
    }
};

int main() {
    auto v = vector<int>{3,3};
    cout<< Solution().findGCD(v)<<endl;
}