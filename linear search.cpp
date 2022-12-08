#include <iostream>
using namespace std;
int main() {
   int sea, c, n=6;
   int arr[] = { 12, 35, 69, 74, 165, 54};
   sea=13`;
   for (c = 0; c < n; c++) {
      if (arr[c] == sea) {
         cout<<"is present at location : "<<c+1<<endl;
         break;
      }
   }
   if (c == n)
      cout<<"isn't present in the array."<<endl;
   return 0;
}
