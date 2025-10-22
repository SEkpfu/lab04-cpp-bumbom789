#include <iostream>
using namespace std;

char getSign(int number) {
    if (number > 0) return '+';
    if (number < 0) return '-';
    return '0';
}

void printNumberText(int number) {
    switch (number) {
        case 0: cout << "ноль"; break;
        case 1: cout << "один"; break;
        case 2: cout << "два"; break;
        case 3: cout << "три"; break;
        case 4: cout << "четыре"; break;
        case 5: cout << "пять"; break;
        case 6: cout << "шесть"; break;
        case 7: cout << "семь"; break;
        case 8: cout << "восемь"; break;
        case 9: cout << "девять"; break;
        case 10: cout << "десять"; break;
        default: cout << "неизвестно"; break;
    }
}

int main() {
    int number;
    
    cout << "Введите число из интервала [-10, 10]: ";
    cin >> number;
    
    if (number < -10 || number > 10) {
        cout << "Ошибка: число должно быть в интервале [-10, 10]!" << endl;
        return 1;
    }
    
    cout << "Число: ";
    
    char sign = getSign(number);
    if (sign == '-') {
        cout << "минус ";
        printNumberText(-number); // выводим модуль числа
    } else if (sign == '+') {
        cout << "плюс ";
        printNumberText(number);
    } else {
        printNumberText(number); // для нуля
    }
    
    cout << endl;
    
    // Альтернативный вывод
    cout << "Знак числа: '" << getSign(number) << "'" << endl;
    cout << "Текстовое представление: ";
    printNumberText(abs(number));
    cout << endl;
    
    return 0;
}