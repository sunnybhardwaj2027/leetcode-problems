#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }

        long long N = n;
        if (N < 0) {
            N = -N;
            x = 1 / x;
        }

        double result = 1;
        while (N > 0) {
            if (N % 2 == 1) {
                result *= x;
            }
            x *= x;
            N /= 2;
        }

        return result;
    }
};

int main() {
    Solution solution;
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = solution.myPow(x, n);
    cout << "Result: " << result << endl;

    return 0;
}
