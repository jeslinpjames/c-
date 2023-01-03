#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the coefficients a, b, and c: ";
    cin >> a >> b >> c;

    double d = b*b - 4*a*c;

    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2*a);
        double root2 = (-b - sqrt(d)) / (2*a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (d == 0) {
        double root = -b / (2*a);
        cout << "Root: " << root << endl;
    }
    else {
        cout << "No real roots." << endl;
    }

    return 0;
}
