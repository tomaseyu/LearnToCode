#include <iostream>
#include <iomanip>
using namespace std;

double calc(double height, double width, double depth) {
    double calc = height * width * depth;
    return calc;
}
double liter(double volume) {
    return volume / 1000;
}

int main() {
    double h, w, d;
    cout << "Say the height in cm: " << endl;
    cin >> h;
    cout << "Say the width in cm: " << endl;
    cin >> w;
    cout << "Say the depth in cm: " << endl;
    cin >> d;

    cout << fixed << setprecision(2) << "The volume is: " << calc(h, w, d) << "cm" << endl;
    cout << fixed << setprecision(2) << "There are: " << liter(calc(h, w, d)) << "L" << endl;
}
