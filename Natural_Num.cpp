#include <iostream>
using namespace std;

int sumN(int n);

int main() {
   int number = 9;
     cout << sumN(number) << endl;
   return 0;
}

int sumN(int n){
   if(n==0){
       return 0;
   }
   return n + sumN(n-1);
}
