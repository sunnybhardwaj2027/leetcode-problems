#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int totalSize = n1 + n2;
        int mid = totalSize / 2;

        int i = 0, j = 0, current = 0, prev = 0;

        for (int k = 0; k <= mid; k++) {
            prev = current;

            
            if (i < n1 && (j >= n2 || nums1[i] <= nums2[j])) {
                current = nums1[i];
                i++;
            } else {
                current = nums2[j];
                j++;
            }
        }

        
        if (totalSize % 2 == 0) {
            return (prev + current) / 2.0;
        } else {
            return current;
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double median = solution.findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;

    return 0;
}
