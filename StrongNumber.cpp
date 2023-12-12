#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int fact,rem,sum=0,temp;
	cout<<"enter a number"<<endl;
	cin>>n;
	cout<<" "<<endl;
	temp=n;
	while(n)
	{
		i=1,fact=1;
		rem=n%10;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	cout<<"it is a strong number"<<endl;
	else
	cout<<"it is not a strong number"<<endl;
	return 0;
}
		
