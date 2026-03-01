#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    vector<int> intersectionArray(vector<int> &A, vector<int> &B) {
        int n = A.size();
        int m = B.size();
        int i = 0;
        int j = 0;

        vector<int> I;

        while(i < n && j < m) {
            if(A[i] < B[j]) {
                i++;
            }
            else if(B[j] < A[i]) {
                j++;
            }
            else {
                I.push_back(A[i]);
                i++;
                j++;
            }
        }
        return I;
    }
};

int main() {
    Solution sol;

    vector<int> A = {1,2,2,3,3,4,5,6};
    vector<int> B = {2,3,3,5,6,6,7};

    vector<int> I = sol.intersectionArray(A, B);

    for(int X : I) {
        cout << X << " ";
    }
    return 0;
}