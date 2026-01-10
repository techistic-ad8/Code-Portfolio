#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
        if (i == 0 || nums[i] != nums[i - 1])
            nums[k++] = nums[i];
    return k;
}

int main() {
    vector<int> nums = {1,1,2,2,3};
    int k = removeDuplicates(nums);

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";
}
