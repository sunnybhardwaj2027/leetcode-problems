#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int len = s.length();
        int start = 0, end = len - 1;
        
        while (start <= end) {
            if (s[start] >= 'A' && s[start] <= 'Z') {
                s[start] = s[start] + 32;
            }
            if (s[end] >= 'A' && s[end] <= 'Z') {
                s[end] = s[end] + 32;
            }

            if (!isAlpha(s[start])) {
                start++;
                continue;
            }
            if (!isAlpha(s[end])) {
                end--;
                continue;
            }

            if (s[start] != s[end]) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }

private:
    bool isAlpha(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return true;
        }
        if (ch >= '0' && ch <= '9') {
            return true;
        }
        return false;
    }
};

int main() {
    Solution solution;
    std::string s;
    std::getline(std::cin, s);
    bool result = solution.isPalindrome(s);
    std::cout << (result ? "true" : "false") << std::endl;
    return 0;
}
