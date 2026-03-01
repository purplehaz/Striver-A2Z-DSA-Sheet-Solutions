#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int linearSearch(vector<int> & nums, int X) {
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(nums[i] == X) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int X = 1;
    vector<int> nums = {1,3,5,-4,1};

    int index = sol.linearSearch(nums, X);
    cout << index << " ";

    return 0;
}