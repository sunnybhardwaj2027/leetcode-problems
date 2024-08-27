#include<iostream>
using namespace std;
#include<climits>


class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0){
            int num = x;
            int revNo = 0;
            while (num > 0){
                int ld = num%10;
                if (revNo > INT_MAX/10){
                    return false;
                }
                revNo = revNo*10+ld;
                num = num/10;
            }

            if (x == revNo){
                return true;
            }
        }
        return false;
    }
};

int main(){
    int x;
    cin >> x;

    Solution s1;
    cout << s1.isPalindrome(x) << endl;
}