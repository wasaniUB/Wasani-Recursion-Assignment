#include <iostream>
using namespace std;

int sumDigits(int n);

int main() {
  
   int number;
   cout << "Enter a number: ";
   cin >> number;
   cout << "\n";
  
     cout << sumDigits(number);
     cout << "\n";
  
   return 0;
}

int sumDigits(int n) {
   if(n < 10) {
       return n;
   }
   return (n % 10) + sumDigits(n / 10);
}
