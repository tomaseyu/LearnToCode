#include <iostream>
using namespace std;

int grosser_mass(int a, int b);

int main() {
    int a, b;
    cout << "Write 1 number: " << endl;
    cin >> a;
    cout << "Write 1 number: " << endl;
    cin >> b;
    int erg1 = grosser_mass(a,b);
    cout << "The big number is: "  << erg1 << endl;

    return 0;
}

int grosser_mass(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}
