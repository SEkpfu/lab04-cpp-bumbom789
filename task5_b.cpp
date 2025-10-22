#include <iostream>
using namespace std;

double power(double x, int n) {
    if (n == 0) return 1;
    
    double result = 1;
    bool negative = false;
    
    if (n < 0) {
        negative = true;
        n = -n;
    }
    
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    
    return negative ? 1.0 / result : result;
}

int main() {
    double x;
    int n;
    cout << "Введите основание x: ";
    cin >> x;
    cout << "Введите степень n: ";
    cin >> n;
    
    cout << x << "^" << n << " = " << power(x, n) << endl;
    
    return 0;
}