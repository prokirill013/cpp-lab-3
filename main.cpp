#include <iostream>
#include <cmath>

using namespace std;

// Прототипи функцій для кожного завдання
void task_if34(); // Завдання 1 (Функція v(x), варіант 34)
void task_if35(); // Завдання 1 (Функція u(x), варіант 35)
void task_geom7(); // Завдання 2 (Геометрична фігура, варіант 7)

int main() {
    int menu;
    do {
        cout << "\n=========================================" << endl;
        cout << "   ЛАБОРАТОРНА РОБОТА №3 (Варіант 34, 35, 7) " << endl;
        cout << "=========================================" << endl;
        cout << "1. Виконати Завдання 1 (Функція If34)" << endl;
        cout << "2. Виконати Завдання 1 (Функція If35)" << endl;
        cout << "3. Виконати Завдання 2 (Геометрія, Вар. 7)" << endl;
        cout << "0. Вихід з програми" << endl;
        cout << "Оберіть номер завдання (1-3): ";
        
        cin >> menu;

        // Перевірка коректності вибору меню
        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Помилка! Введено не число. Спробуйте ще раз." << endl;
            continue;
        }

        switch (menu) {
            case 1:
                task_if34();
                break;
            case 2:
                task_if35();
                break;
            case 3:
                task_geom7();
                break;
            case 0:
                cout << "Вихід з програми. До побачення!" << endl;
                break;
            default:
                cout << "Невірний номер завдання! Будь ласка, оберіть від 1 до 3." << endl;
        }
    } while (menu != 0);

    return 0;
}

// Реалізація завдання 1: Варіант 34 (Функція v(x))
void task_if34() {
    cout << "\n--- Завдання 1: Варіант 34 (If34) ---" << endl;
    double x;
    cout << "Введіть дійсне число x: ";
    cin >> x;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Помилка: введено не числові дані!" << endl;
        return;
    }

    int result;
    if (x < 1) {
        result = static_cast<int>(x * x - 2 * x);
    } else if (x >= 1 && x <= 3) {
        result = static_cast<int>(2 * x + 1);
    } else {
        result = 7;
    }

    cout << "Результат обчислення v(x) = " << result << endl;
}

// Реалізація завдання 1: Варіант 35 (Функція u(x))
void task_if35() {
    cout << "\n--- Завдання 1: Варіант 35 (If35) ---" << endl;
    double x;
    cout << "Введіть дійсне число x: ";
    cin >> x;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Помилка: введено не числові дані!" << endl;
        return;
    }

    int result;
    if (x <= 0) {
        result = static_cast<int>(-x * x);
    } else if (x > 0 && x <= 3) {
        result = static_cast<int>(x);
    } else {
        result = static_cast<int>(9 - x);
    }

    cout << "Результат обчислення u(x) = " << result << endl;
}

// Реалізація завдання 2: Варіант 7 (Геометрична фігура)
void task_geom7() {
    cout << "\n--- Завдання 2: Варіант 7 (Геометрія) ---" << endl;
    double a;
    cout << "Введіть сторону квадрата a (a > 0): ";
    cin >> a;

    if (cin.fail() || a <= 0) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Помилка: некоректне значення сторони a!" << endl;
        return;
    }

    double x, y;
    cout << "Введіть координати точки (x y): ";
    cin >> x >> y;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Помилка: некоректні координати точки!" << endl;
        return;
    }

    bool inTriangle = (x >= -a / 2.0 && x <= 0 && y >= a / 2.0 && y <= a + x);
    bool inSquareQuad = (x >= -a / 2.0 && x <= 0 && y >= 0 && y <= a / 2.0);

    if (inTriangle || inSquareQuad) {
        cout << "Результат: Точка ПОТРАПЛЯЄ в фігуру заданого кольору (Вар. 7)." << endl;
    } else {
        cout << "Результат: Точка НЕ ПОТРАПЛЯЄ в фігуру заданого кольору." << endl;
    }
}
