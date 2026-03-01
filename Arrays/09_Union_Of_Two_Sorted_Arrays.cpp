#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;

        vector<int> U;

        while(i<n1 && j<n2) {
            if(nums1[i] <= nums2[j]) {
                if(U.size() == 0 || U.back() != nums1[i]) {
                    U.push_back(nums1[i]);
                }
                i++;
            }
            else {
                if(U.size() == 0 || U.back() != nums2[j]) {
                    U.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i < n1) {
            if(U.size() == 0 || U.back()!= nums1[i]) {
                U.push_back(nums1[i]);
            }
            i++;
        }
        while(j < n2) {
            if(U.size() == 0 || U.back()!= nums2[j]) {
                U.push_back(nums2[j]);
            }
            j++;
        }
        return U;
    }
    
};

int main() {
    Solution sol;
    vector<int> nums1 = {3,4,4,4};
    vector<int> nums2 = {6,7,7};

    vector<int> U = sol.unionArray(nums1, nums2);

    for(int X : U) {
        cout << X << " ";
    }
    return 0;
}