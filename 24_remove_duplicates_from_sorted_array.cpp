#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 1;
        int size = nums.size();

        if (size == 0) return 0;

        for (int i = 1; i < size; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[unique] = nums[i];
                unique++;
            }
        }

        return unique;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 3, 3, 4, 5, 5, 6};
    
    int newLength = sol.removeDuplicates(nums);
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << "\nNew length: " << newLength << endl;
    
    return 0;
}
