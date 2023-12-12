#include<iostream>
using namespace std;
int main()
{
	int n,originalnum,remainder,result=0;
	cout<<"enter a number:";
	cin>>n;
	originalnum=n;
	while(originalnum !=0)
	{
		remainder=originalnum%10;
		result=result+remainder*remainder*remainder;
		originalnum=originalnum/10;
	}
	if(result==n)
	{
		cout<<n<<" is a narcissistic number"<<endl;
	}
	else
	{
		cout<<n<<" is not a narssisitic number"<<endl;
		
	}
	return 0;
}
