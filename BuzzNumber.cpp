#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	if(n%7==0||n%10==7)
	{
		cout<<"it is a buzz number"<<endl;
	}
		else
		{
		cout<<"it is not a buzz number"<<endl;
	}
	return 0;
}
