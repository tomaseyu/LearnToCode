#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;
int main() {
   int divisor, dividend, remainder;
   cout << "Please enter a number: ";
   cin >> dividend;
   divisor = 2;
   remainder = dividend % divisor;
   
   if (remainder == 0) {
   cout << "Zahl ist durch 2 teilbar\n " << remainder <<endl; }
   
   else {
   	cout << "Zahl ist nicht durch 2 teilbar\n "<<endl;
   }
  
system("PAUSE");
return 0;
}
