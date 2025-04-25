#include <iostream>
using namespace std;

void printReverse(int arr[], int size);

int main() {


   int arr[] = {2000, 2001, 2002, 2003};
    printReverse(arr, 4);
     cout << endl;
    
   return 0;
}

void printReverse(int arr[], int size) {
   if(size == 0) {
       return;
   }
     cout << arr[size - 1] << " ";
   printReverse(arr, size - 1);  
}
