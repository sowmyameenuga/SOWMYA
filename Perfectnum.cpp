#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter a number:";
	cin>>n;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	cout<<n<<" is a perfect number"<<endl;
	else
	cout<<n<<" is not a perfect number"<<endl;
	return 0;
}
