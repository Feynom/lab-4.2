#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, a, b, xp, xk, dx; 

    cout << "Введіть значення 'хp'"; cin >> xp;
    cout << "Введіть значення 'хk'"; cin >> xk;
    cout << "Введіть значення 'dx'"; cin >> dx;

    x = xp;

    cout << fixed;
    cout << "-----------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |";
    cout << setw(7) << "y" << "   |" << endl;
    cout << "-----------------------" << endl;

    x = xp;
    while(x<=xk)
    {
        a = abs(9 * pow(x, 3.) + 2);
        if (x < 4)
            b = 3 * pow(x, 5.) - pow(x, 3.) + 2 * x - 1;
        else
            if (4 <= x && x < 7)
                b = atan((x - 2) / 3.);
            else
                b = log10((2. / x) + exp(3 * x + 1));
        y = a + b;
        cout << "|" << setw(7) << setprecision(2) << x;
        cout << "   |" << setw(10) << setprecision(3) << y;
        cout << "|" << endl;  
        x += dx;
    }
    cout << "-----------------------" << endl;

    cin.get();
    return 0;
}
