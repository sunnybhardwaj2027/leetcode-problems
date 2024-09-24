#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        int j = 0, k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                nums[i] = pos[j++];
            } else {
                nums[i] = neg[k++];
            }
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    Solution sol;
    vector<int> result = sol.rearrangeArray(nums);

    cout << "Rearranged array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
