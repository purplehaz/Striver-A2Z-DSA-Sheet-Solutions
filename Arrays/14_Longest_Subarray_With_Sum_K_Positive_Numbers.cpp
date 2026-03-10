#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int longestSubarrayWithSumK(vector<int> &nums , long long k) {
        int n = nums.size();
        int left = 0 , right = 0;
        long long sum = nums[0];
        int maxLen = 0;

        while(right < n) {
            while(left <= right && sum > k) {
                sum -= nums[left];
                left ++;
            }
            if (sum == k) {
                maxLen = max(maxLen , right - left + 1);
            }
            right ++;
            if (right < n) sum += nums[right];
        }
        return maxLen;
    }
};

int main() {
    Solution sol;

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> nums = {1,2,3,1,1,1,1,3,3};
    long long k = 6;

    int S = sol.longestSubarrayWithSumK(nums , k);

        cout << S << endl;
    return 0;
}