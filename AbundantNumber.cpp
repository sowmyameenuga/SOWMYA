#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum>n)
	{
		cout<<n<<" is a abundant number"<<endl;
	}
	else
	{
		cout<<n<<" is not a abundant number"<<endl;
	}
	return 0;
}
	
