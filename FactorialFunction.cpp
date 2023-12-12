#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int n,result;
	cout<<"enter a number:";
	cin>>n;
	if(n<0)
	{
		cout<<"factorial is not defined for negative values";
	}
	else
	{
		result=factorial(n);
		cout<<"factorial of "<<n<<" is "<<result<<endl;
	}
}
