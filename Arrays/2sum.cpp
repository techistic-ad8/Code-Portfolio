#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 6, 3};
    int target = 7;

    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++) {
        int a = nums[i];
        int more = target - a;

        if (mpp.find(more) != mpp.end()) {
            cout << mpp[more] << " " << i << endl;
            return 0;
        }

        mpp[a] = i;
    }

    cout << "No pair found" << endl;
    return 0;
}
