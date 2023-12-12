#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,originalnum,rem;
	cout<<"enter a number:";
	cin>>n;
	while(n !=0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
	}
	if(originalnum%sum==0)
	{
		cout<<"it is harshad number"<<endl;
	}
	else
	{
		cout<<"it is not a harshad number"<<endl;
	}
	return 0;
}
