#include <iostream>
using namespace std;
long Factorial(long n) {
 long a=1;
 
  for (long i = 1; i <= n; i++)
  {
   a *= i;
   
  }
 return a;
}
int main() {
 long n;
 cin >> n;
 cout<<Factorial(n) << endl;
 return 0;
}
