#include <iostream>
#include <iomanip>
#include <cmath>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << endl;

    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "|" << setw(10) << "x" << setw(10) << "|";
    cout << setw(14) << "atan(x)" << setw(6) << "|";
    cout << setw(10) << "n" << setw(10) << "|";
    cout << setw(10) << "S" << setw(10) << "|" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        sum();

        cout << "|" << setw(10) << setprecision(3) << x << setw(10) << "|";
        cout << setw(10) << setprecision(3) <<atan(x) << setw(10) << "|";
        cout << setw(10) << setprecision(3) << n << setw(10) << "|";
        cout << setw(10) << setprecision(3) << s  << "|" << endl;

        x += dx;
    }

    cout << "---------------------------------------------------------------------------------" << endl;

    return 0;
}