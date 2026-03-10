#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &nums , int k) {
    int n = nums.size();
    map<long long , int> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    for(int i=0; i<n; i++) {
        sum += nums[i];
        if (sum == k) {
            maxLen = max(maxLen , i+1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen , len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main() {
    vector<int> nums = {1,2,3,1,1,1,1,3,3};
    int k = 6;

    int S = longestSubarrayWithSumK(nums , k);

    cout << S << endl;
    return 0;
}