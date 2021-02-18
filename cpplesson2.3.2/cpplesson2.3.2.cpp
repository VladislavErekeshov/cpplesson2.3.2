#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c;
    cin >> x;
    a = x / 100;
    b = x / 10 % 10;
    c = x / 1 % 10;
    cout << a << " " << b << c;
    return 0;
}