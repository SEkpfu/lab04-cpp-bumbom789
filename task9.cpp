#include <iostream>
using namespace std;


bool f(double x, double &result) {
    if (x <= 2) {
        // Проверка деления на ноль: 1/(1-x) и 3x
        if (x == 1 || x == 0) {
            return false;
        }
        result = (2 * x + 1.0 / (1 - x)) / (3 * x);
        return true;
    }
    else if (x > 2 && x <= 5) {
        result = 10 * 2.0 / 7.0;
        return true;
    }
    else {
        result = -3 - x;
        return true;
    }
}

int main() {
    double a, b;
    
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    
    // Вычисление первого выражения: f(2) - f(0)*f(a)
    double f2, f0, fa;
    double expr1 = 0;
    
    if (f(2, f2) && f(0, f0) && f(a, fa)) {
        expr1 = f2 - f0 * fa;
        cout << "f(2) = " << f2 << endl;
        cout << "f(0) = " << f0 << endl;
        cout << "f(a) = " << fa << endl;
        cout << "f(2) - f(0)*f(a) = " << expr1 << endl;
    } else {
        cout << "Невозможно вычислить первое выражение (деление на ноль)" << endl;
    }
    
    cout << endl;
    
    // Вычисление второго выражения: f(2a) - f(6) + f(ab)
    double f2a, f6, fab;
    double expr2 = 0;
    
    if (f(2 * a, f2a) && f(6, f6) && f(a * b, fab)) {
        expr2 = f2a - f6 + fab;
        cout << "f(2a) = " << f2a << endl;
        cout << "f(6) = " << f6 << endl;
        cout << "f(ab) = " << fab << endl;
        cout << "f(2a) - f(6) + f(ab) = " << expr2 << endl;
    } else {
        cout << "Невозможно вычислить второе выражение (деление на ноль)" << endl;
    }
    
    return 0;
}