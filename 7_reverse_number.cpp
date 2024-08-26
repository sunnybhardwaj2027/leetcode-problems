#include<iostream>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int reverse_num = 0;
        
        while (x != 0) {
            int last_digit = x % 10;
            
            
            if (reverse_num > INT_MAX / 10 || (reverse_num == INT_MAX / 10 && last_digit > 7)) return 0;
            if (reverse_num < INT_MIN / 10 || (reverse_num == INT_MIN / 10 && last_digit < -8)) return 0;
            
            reverse_num = reverse_num * 10 + last_digit;
            x /= 10;
        }
        
        return reverse_num;
    }
};

int main(){
    int x;
    std :: cin >> x;
    Solution s1;
    std :: cout << s1.reverse(x);

    return 0;
}