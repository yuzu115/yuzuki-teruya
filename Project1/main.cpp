#include <iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);

int main() {
    int a = 20, b = 5;

    cout << "‘«‚µZ: " << a << " + " << b << " = " << add(a, b) << endl;
    cout << "ˆø‚«Z: " << a << " - " << b << " = " << sub(a, b) << endl;
    cout << "Š|‚¯Z: " << a << " * " << b << " = " << mul(a, b) << endl;
    cout << "Š„‚èZ: " << a << " / " << b << " = " << divi(a, b) << endl;

    return 0;
}
