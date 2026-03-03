#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int missingNumber(vector<int> &nums , int N) {
    int n = nums.size();

    int xor1 = 0; 
    int xor2 = 0;

    for(int i=0; i < n; i++) {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ i+1;
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
   }
};

int main() {
    Solution sol;

    vector<int> nums = {1,2,4,5};
    int N = 5;

    int Number = sol.missingNumber(nums, N);

    cout << Number << " ";
    return 0;
}