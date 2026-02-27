#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void rotateArrayByOne(vector<int> & a, int n) {
        int temp = a[0];

        for (int i = 1; i < n; i++) {
            a[i-1] = a[i] ;
        }
        a[n - 1] = temp ;
    
    }
};

int main () {

    Solution sol;

    vector<int> a = {1,2,3,4};
    int n = a.size();

sol.rotateArrayByOne(a,n);

for (int x : a) {
    cout << x << " ";
}
return 0;
}