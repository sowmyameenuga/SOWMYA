#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,size,sum;
	float average;
	cout<<"enter number of elements:";
	cin>>size;
	cout<<"enter elements"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
		for(i=0;i<size;i++)
		{
			sum=sum+arr[i];
		}
		average=(float)sum/size;
		cout<<"the average is "<<average<<endl;
	return 0;
}
