#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <iomanip>

#define NOMINMAX
#include <windows.h>


using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    constexpr float gravity = 9.8f;
    float angle, time, velocity;
    bool isActive = true;
    int option;

    while (isActive) {
        cout << "hi данные для расчета скорости" << endl;
        cout << "Введите время в секундах: ";
        while (!(cin >> time) || time < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Неверный ввод. Пожалуйста, введите положительное число для времени: ";
        }

        cout << "Введите угол в градусах: ";
        while (!(cin >> angle) || angle < 0 || angle > 90) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Неверный ввод. Пожалуйста, введите угол от 0 до 90 градусов: ";
        }

        float angle_rad = angle * M_PI / 180.0f;
        velocity = (gravity * sin(angle_rad)) * time;

        cout << fixed << setprecision(2);
        cout << "Скорость " << velocity << " м/с" << endl;

        bool validOption = false;
        while (!validOption) {
            cout << "Введите 1, чтобы снова использовать программу, или 2, чтобы закрыть ее: ";
            while (!(cin >> option)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Неверный ввод. Пожалуйста, введите 1 или 2: ";
            }

            switch (option) {
            case 1:
                validOption = true;
                break;
            case 2:
                isActive = false;
                validOption = true;
                break;
            default:
                cout << "Неверный номер. Пожалуйста, введите 1 или 2" << endl;
                break;
            }
        }
    }

    return 0;
}
