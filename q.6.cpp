#include <iostream>
#include <cmath>
#include <complex>  // For handling complex numbers
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
        return 1;
    }

    double discriminant = b * b - 4 * a * c;
    double realPart, imagPart;

    cout << fixed; // Format output with fixed point
    cout.precision(2); // Two decimal places

    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);n
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct:\n";
        cout << "Root 1 = " << root1 << "\n";
        cout << "Root 2 = " << root2 << "\n";
    }
    else if (discriminant == 0) {
        // Real and equal roots
        double root = -b / (2 * a);
        cout << "Roots are real and equal:\n";
        cout << "Root = " << root << "\n";
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and imaginary:\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i\n";
        cout << "Root 2 = " << realPart << " - " << imagPart << "i\n";
    }

    return 0;
}


    