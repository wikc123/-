#include<iostream>
using namespace std;
int fibonacci(int n)
{
 if(n==1)
   return 1;
 if(n==2)
   return 2;
 if(n>2)
   return fibonacci(n-1)+fibonacci(n-2); 
}
int main()
{
 int n;
 cin>>n;
 cout<<"������һ��С��100�������� "<<n<<endl;
 cout<<fibonacci(n)<<endl;  
}
