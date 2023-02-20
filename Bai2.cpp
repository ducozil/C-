#include <iostream>
#include <cmath>

using namespace std;

void quadraticEquation(double a, double b, double c) {
    if (a == 0) {
        // Linear equation
        double x = -c / b;
        cout << "The equation has one root: x = " << x << endl;
    } else {
        // Quadratic equation
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "The equation has no real roots." << endl;
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "The equation has two roots: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }
}

int main() {
    double a, b, c;
    cout << "Enter the coefficients a, b, and c: ";
    cin >> a >> b >> c;

    quadraticEquation(a, b, c);

    return 0;
}
