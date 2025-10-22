#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n < 0) return 0; // Факториал отрицательного числа не определен
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int N, M;
    
    cout << "Введите число N: ";
    cin >> N;
    cout << "Введите число M: ";
    cin >> M;
    
    long long N_fact = factorial(N);
    long long M_fact = factorial(M);
    long long NM_fact = factorial(N + M);
    
    if (NM_fact == 0) {
        cout << "Ошибка: факториал отрицательного числа!" << endl;
    } else {
        double result = (double)(N_fact * M_fact) / NM_fact;
        cout << N << "! = " << N_fact << endl;
        cout << M << "! = " << M_fact << endl;
        cout << "(" << N << " + " << M << ")! = " << NM_fact << endl;
        cout << "Результат: " << N << "! * " << M << "! / (" << N << " + " << M << ")! = " << result << endl;
    }
    
    return 0;
}