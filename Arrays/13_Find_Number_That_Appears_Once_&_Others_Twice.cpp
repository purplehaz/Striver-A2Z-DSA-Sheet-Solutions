#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

int appearsOnce(vector<int> &nums) {
    int n = nums.size();
    int xorr = 0;
    
    for(int i = 0; i < n ; i++) {
        xorr = xorr ^ nums[i];
    }
    return xorr;
}
};

int main() {
    Solution sol;

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> nums = {1,1,2,3,3,4,4};

    int X = sol.appearsOnce(nums);

    cout << X << endl;
    return 0;
    }










