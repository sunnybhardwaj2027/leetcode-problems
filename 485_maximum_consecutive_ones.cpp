#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCons = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                maxCons = max(count, maxCons);
            } else {
                count = 0;
            }
        }

        return maxCons;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int maxConsecutiveOnes = solution.findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive ones: " << maxConsecutiveOnes << endl;

    return 0;
}
