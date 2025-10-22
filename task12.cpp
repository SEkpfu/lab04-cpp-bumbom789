#include <iostream>
using namespace std;

// a) Номер передается одним целым шестизначным числом
bool isLuckyTicket(int ticket) {
    if (ticket < 100000 || ticket > 999999) {
        cout << "Ошибка: число должно быть шестизначным!" << endl;
        return false;
    }
    
    int sum1 = 0, sum2 = 0;
    int temp = ticket;
    
    // Суммируем последние 3 цифры
    for (int i = 0; i < 3; i++) {
        sum2 += temp % 10;
        temp /= 10;
    }
    
    // Суммируем первые 3 цифры
    for (int i = 0; i < 3; i++) {
        sum1 += temp % 10;
        temp /= 10;
    }
    
    return sum1 == sum2;
}

// b) Номер передается шестью отдельными цифрами
bool isLuckyTicket(int d1, int d2, int d3, int d4, int d5, int d6) {
    // Проверяем, что все цифры в диапазоне 0-9
    if (d1 < 0 || d1 > 9 || d2 < 0 || d2 > 9 || d3 < 0 || d3 > 9 ||
        d4 < 0 || d4 > 9 || d5 < 0 || d5 > 9 || d6 < 0 || d6 > 9) {
        cout << "Ошибка: все цифры должны быть в диапазоне 0-9!" << endl;
        return false;
    }
    
    int sum1 = d1 + d2 + d3;
    int sum2 = d4 + d5 + d6;
    
    return sum1 == sum2;
}

// c) Номер передается двумя трехзначными числами
bool isLuckyTicket(int firstHalf, int secondHalf) {
    if (firstHalf < 100 || firstHalf > 999 || secondHalf < 100 || secondHalf > 999) {
        cout << "Ошибка: обе половины должны быть трехзначными числами!" << endl;
        return false;
    }
    
    int sum1 = 0, sum2 = 0;
    int temp1 = firstHalf, temp2 = secondHalf;
    
    // Сумма цифр первой половины
    for (int i = 0; i < 3; i++) {
        sum1 += temp1 % 10;
        temp1 /= 10;
    }
    
    // Сумма цифр второй половины
    for (int i = 0; i < 3; i++) {
        sum2 += temp2 % 10;
        temp2 /= 10;
    }
    
    return sum1 == sum2;
}

// Вспомогательная функция для красивого вывода результата
void printResult(bool isLucky, int ticket) {
    cout << "Билет " << ticket << " - " << (isLucky ? "счастливый" : "несчастливый") << endl;
}

void printResult(bool isLucky, int d1, int d2, int d3, int d4, int d5, int d6) {
    cout << "Билет " << d1 << d2 << d3 << d4 << d5 << d6 << " - " 
         << (isLucky ? "счастливый" : "несчастливый") << endl;
}

void printResult(bool isLucky, int first, int second) {
    cout << "Билет " << first << second << " - " 
         << (isLucky ? "счастливый" : "несчастливый") << endl;
}

int main() {
    cout << "=== ТЕСТИРОВАНИЕ ФУНКЦИЙ ДЛЯ СЧАСТЛИВОГО БИЛЕТА ===" << endl << endl;
    
    // Тестирование функции a) - одним целым числом
    cout << "a) Передача одним целым числом:" << endl;
    int ticket1 = 123321; // счастливый: 1+2+3 = 3+2+1
    int ticket2 = 123456; // несчастливый: 1+2+3 ≠ 4+5+6
    
    printResult(isLuckyTicket(ticket1), ticket1);
    printResult(isLuckyTicket(ticket2), ticket2);
    
    // Тест с некорректным числом
    isLuckyTicket(12345); // не шестизначное
    
    cout << endl;
    
    // Тестирование функции b) - шестью отдельными цифрами
    cout << "b) Передача шестью отдельными цифрами:" << endl;
    // Счастливый билет: 1+2+3 = 3+2+1
    printResult(isLuckyTicket(1, 2, 3, 3, 2, 1), 1, 2, 3, 3, 2, 1);
    // Несчастливый билет: 1+2+3 ≠ 4+5+6
    printResult(isLuckyTicket(1, 2, 3, 4, 5, 6), 1, 2, 3, 4, 5, 6);
    
    // Тест с некорректными цифрами
    isLuckyTicket(1, 2, 3, 10, 5, 6); // цифра 10 недопустима
    
    cout << endl;
    
    // Тестирование функции c) - двумя трехзначными числами
    cout << "c) Передача двумя трехзначными числами:" << endl;
    // Счастливый билет: 123 и 321 (1+2+3 = 3+2+1)
    printResult(isLuckyTicket(123, 321), 123, 321);
    // Несчастливый билет: 123 и 456 (1+2+3 ≠ 4+5+6)
    printResult(isLuckyTicket(123, 456), 123, 456);
    
    // Тест с некорректными числами
    isLuckyTicket(12, 456); // 12 не трехзначное
    
    cout << endl;
    
    // Дополнительные тесты с пользовательским вводом
    cout << "=== ДОПОЛНИТЕЛЬНЫЕ ТЕСТЫ ===" << endl;
    
    // Тест 1: известный счастливый билет
    cout << "Тест 1: ";
    printResult(isLuckyTicket(123123), 123123);
    
    // Тест 2: все цифры одинаковые
    cout << "Тест 2: ";
    printResult(isLuckyTicket(111111), 111111);
    
    // Тест 3: зеркальный билет
    cout << "Тест 3: ";
    printResult(isLuckyTicket(123, 321), 123, 321);
    
    // Тест 4: раздельный ввод цифр
    cout << "Тест 4: ";
    printResult(isLuckyTicket(5, 4, 3, 3, 4, 5), 5, 4, 3, 3, 4, 5);
    
    return 0;
}