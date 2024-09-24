#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count0++;
            } else if (nums[i] == 1) {
                count1++;
            } else {
                count2++;
            }
        }
        int j = 0;
        for (int i = 0; i < count0; i++) {
            nums[i] = 0;
            j++;
        }

        for (int i = 0; i < count1; i++) {
            nums[j] = 1;
            j++;
        }

        for (int i = 0; i < count2; i++) {
            nums[j] = 2;
            j++;
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    Solution sol;
    sol.sortColors(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
