// Lab44.cpp
// Скоропад Владислав
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 11

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, xp, xk, dx, y, R;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x <= -1 - R){
            y = -x - 1 - R;
        }
        else if (x > -1 - R && x <= -1) {
            y = sqrt(R * R - (x + 1) * (x + 1));
        }
        else if (x > -1 && x < 1) {
            y = R;
        }
        else if (x > 1 && x < 2) {
            y = R + 1 - x;
        }
        else {
            y = -1;
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
