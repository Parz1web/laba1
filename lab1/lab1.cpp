#include <iostream>
#include <cmath>

double y(double);
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double n;
    cout << "Введите число: ";
    cin >> n;

    cout << y(n) <<endl;

    return 0;
}

double y(double n)
{
    if (n == 1)
        return n;
    else
        return sqrt(sqrt(n) + y(n - 1));
}