#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        int first = 0, second = 1;
        int fib = 0;
        for (int i = 2; i <= n; i++) {
            fib = first + second;
            first = second;
            second = fib;
        }
        return fib;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;
    int result = solution.fib(n);
    cout << result << endl;
    return 0;
}
