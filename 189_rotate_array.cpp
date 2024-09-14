#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        vector<int> nums2(size);
        for(int i = 0; i < size; i++){
            if(i + k < size){
                nums2[i + k] = nums[i];
            } else {
                nums2[i + k - size] = nums[i];
            }
        }
        for (int i = 0; i < size; i++){
            nums[i] = nums2[i];
        }
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    solution.rotate(nums1, k1);
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    solution.rotate(nums2, k2);
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
