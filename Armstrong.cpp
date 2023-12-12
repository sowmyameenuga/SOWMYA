#include<iostream>
using namespace std;
int main()
{
	int n,originalnum,reversednum,remainder,result;
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
		cout<<n<<" is an armstrong number";
    else
    cout<<n<<" is not an armstrong number";
	return 0;
}
