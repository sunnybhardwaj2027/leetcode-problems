#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int x = num;
        string result;

        if (x >= 1000) {
            int m = x / 1000;
            x = x % 1000;
            for (int i = 0; i < m; i++) {
                result += 'M';
            }
        }
        if (x >= 900) {
            result += "CM";
            x -= 900;
        }
        if (x >= 500) {
            result += "D";
            x -= 500;
        }
        if (x >= 400) {
            result += "CD";
            x -= 400;
        }
        if (x >= 100) {
            int c = x / 100;
            x = x % 100;
            for (int i = 0; i < c; i++) {
                result += 'C';
            }
        }
        if (x >= 90) {
            result += "XC";
            x -= 90;
        }
        if (x >= 50) {
            result += "L";
            x -= 50;
        }
        if (x >= 40) {
            result += "XL";
            x -= 40;
        }
        if (x >= 10) {
            int X = x / 10;
            x = x % 10;
            for (int i = 0; i < X; i++) {
                result += 'X';
            }
        }
        if (x == 9) {
            result += "IX";
            x -= 9;
        }
        if (x >= 5) {
            result += "V";
            x -= 5;
        }
        if (x == 4) {
            result += "IV";
            x -= 4;
        }
        if (x >= 1) {
            for (int i = 0; i < x; i++) {
                result += 'I';
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    int num;
    cin >> num;
    cout << sol.intToRoman(num) << endl;
    return 0;
}
