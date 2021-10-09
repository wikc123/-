#include<iostream>
using namespace std;
int f(int n)
{
	if(n==1)
	  return 1;
	if(n==2)
	  return 2;
	if(n>2)
	  return f(n-1)+f(n-2); 
}
int main()
{
	int n;
	cin>>n;
	cout<<"请输入一个小于100的整数： "<<n<<endl;
	cout<<"共有"<<f(n)<<"种方法"<<endl;  
}


