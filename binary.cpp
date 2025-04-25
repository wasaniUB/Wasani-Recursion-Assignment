#include <iostream>
using namespace std;

void printBinary(int n);

int main() {
    int number;
    cout << "Enter a number to convert: ";
    cin >> number;
    cout << "\n";
  
  printBinary(number);
   cout << "\n";
  
   return 0;
}
void printBinary(int n) {
   if(n == 0) {
       return;
   }
   printBinary(n / 2);
   cout << n % 2;
}
