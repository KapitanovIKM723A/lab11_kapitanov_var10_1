#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    char a, b;
    cout << "Введiть значення для змiнної a: ";
    cin >> a;
    cout << "Введiть значення для змiнної b: ";
    cin >> b;
    cout << "Перед обмiном: a = " << a << ", b = " << b << endl;
    char* pointerA = &a, * pointerB = &b;
    char temp = *pointerA;
    *pointerA = *pointerB;
    *pointerB = temp;
    cout << "Пiсля обмiну: a = " << a << ", b = " << b << endl;
    return 0;
}