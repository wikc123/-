#include<iostream>
using namespace std;
int f(int n)
{
 if(n==1)
   return 1;
 if(n>2)
   return f(n-1)*n; 
}
int main()
{
 int n;
 cin>>n;
 cout<<"������һ��С��100�������� "<<n<<endl;
 cout<<"�׳�Ϊ��"<<f(n)<<endl; 
}
