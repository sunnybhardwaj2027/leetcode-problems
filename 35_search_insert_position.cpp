#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2; 

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return start;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    
    int result = solution.searchInsert(nums, target);
    cout << "Target index: " << result << endl;
    
    return 0;
}
