#include <iostream>
#include <bitset>
using namespace std;
void First(int n) {
    int number = 0x1024;
    int mask = 0xA0;
    cout << "Программа заменяет 5-ый и 7-ой бит справа на 1" << endl << "Выбор значения:" << endl << "1)По умолчанию" << endl << "2)Ручной ввод" << endl;
    cin >> n;
    switch (n) {
    case 2: {
        cout << "Введите значение в десятичной форме:" << endl;
        cin >> number;
        }
    }
    cout << "Число:    " << bitset<16>(number) << endl;
    cout << "Маска:    " << bitset<16>(mask) << endl;
    number = number | mask;
    cout << "Результат:" << bitset<16>(number) << endl << endl;
}
void Second(int n) {
    int number = 0x1024;
    int mask = 0xC1FF;
    cout << "Программа заменяет с 9-ого четыре бита слева на 0" << endl << "Выбор значения:" << endl << "1)По умолчанию" << endl << "2)Ручной ввод" << endl;
    cin >> n;
    switch (n) {
    case 2: {
        cout << "Введите значение в десятичной форме:" << endl;
        cin >> number;
    }
    }
    cout << "Число:    " << bitset<16>(number) << endl;
    cout << "Маска:    " << bitset<16>(mask) << endl;
    number = number & mask;
    cout << "Результат:" << bitset<16>(number) << endl << endl;
}
void Third(int n) {
    int number = 0x1024;
    cout << "Программа производит сдвиг влево на 3 бита" << endl << "Выбор значения:" << endl << "1)По умолчанию" << endl << "2)Ручной ввод" << endl;
    cin >> n;
    switch (n) {
    case 2: {
        cout << "Введите значение в десятичной форме:" << endl;
        cin >> number;
    }
    }
    cout << "Число:    " << bitset<16>(number) << endl;
    number = number << 3;
    cout << "Результат:" << bitset<16>(number) << endl << endl;
}
void Fourth(int n) {
    int number = 0x1024;
    cout << "Программа производит сдвиг вправо на 3 бита" << endl << "Выбор значения:" << endl << "1)По умолчанию" << endl << "2)Ручной ввод" << endl;
    cin >> n;
    switch (n) {
    case 2: {
        cout << "Введите значение в десятичной форме:" << endl;
        cin >> number;
    }
    }
    cout << "Число:    " << bitset<16>(number) << endl;
    number = number >> 3;
    cout << "Результат:" << bitset<16>(number) << endl << endl;
}
void Fifth(int n) {
    int number = 0x1024;
    int mask = 0xA0;
    int mask1 = 0x01;
    int m = 6;
    cout << "Программа заменяет 5-ый, 7-ой и выбранный n-ый бит справа на 1" << endl << "Выбор значения:" << endl << "1)По умолчанию" << endl << "2)Ручной ввод" << endl;
    cin >> n;
    switch (n) {
    case 2: {
        cout << "Введите значение в десятичной форме:" << endl;
        cin >> number;
    }
    }
    cout << "Выбор n-ого бита" << endl << "Выберите значения:" << endl << "1)По умолчанию" << endl << "2)Ручной ввод" << endl;
    cin >> n;
    switch (n) {
    case 2: {
        cout << "Введите значение в десятичной форме:" << endl;
        cin >> m;
    }
    }
    mask1 = mask1 << m;
    mask = mask | mask1;
    cout << "Число:    " << bitset<16>(number) << endl;
    cout << "Маска:    " << bitset<16>(mask) << endl;
    number = number | mask;
    cout << "Результат:" << bitset<16>(number) << endl << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    bool ending = true;
    while (ending) {
        cout << "Выберите номер:" << endl << "1)Установить выбранные биты в 1" << endl << "2)Установить выбранные биты в 0" << endl << "3)Умножение" << endl << "4)Деление" << endl << "5)Установить n-ый бит в 1, используя маску пункта 1" << endl << "6)Выход" << endl;
        int n;
        cin >> n;
        switch (n) {
        case 1: {
            First(n);
            break;
        }
        case 2: {
            Second(n);
            break;
        }
        case 3: {
            Third(n);
            break;
        }
        case 4: {
            Fourth(n);
            break;
        }
        case 5: {
            Fifth(n);
            break;
        }
        case 6: {
            ending = false;
        }
        }
    }
}
