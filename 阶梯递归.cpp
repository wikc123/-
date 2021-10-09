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
 cout<<"请输入一个小于100的整数： "<<n<<endl;
 cout<<"阶乘为："<<f(n)<<endl; 
}
