#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
         reverse(nums.end() - k, nums.end());
         reverse(nums.begin(), nums.begin() + (n-k));
         reverse(nums.begin(), nums.end());
    }
};

int main() {
    Solution sol;

  int k = 3;
  vector<int> nums = {1,2,3,4,5,6,7};
   
   sol.rotate(nums, k);

for (int x : nums) {
    cout << x << " ";
}
return 0;
}