#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0;
	cout<<"enter a number"<<endl;
	cin>>n;
	while(sum !=1&&sum!=4)
	{
		sum=0;
		while(n>0)
		{
			temp=n%10;
			sum=sum+(temp*temp);
			n=n/10;
		}
		n=sum;
	}
	if(sum==1)
	cout<<"happy number"<<endl;
	else
	cout<<"unhappy number"<<endl;
	return 0;
}
