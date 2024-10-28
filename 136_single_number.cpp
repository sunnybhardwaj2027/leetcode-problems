#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            result ^= nums[i];
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 1, 2, 1, 2};
    int singleNum = solution.singleNumber(nums);

    cout << "Single number is: " << singleNum << endl;

    return 0;
}
