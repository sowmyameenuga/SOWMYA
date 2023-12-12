#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[n],min,max,sec_max;
	cout<<"enter thr no.of elements in an array:";
	cin>>n;
	arr[n];
	cout<<"enter values in an array:\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max=min;
	sec_max=min;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			sec_max=max;
			max=arr[i];
		}
		if(arr[i]<max&&arr[i]>sec_max)
		{
			sec_max=arr[i];
		}
	}
	cout<<"second highest number in an array is "<<sec_max;
	return 0;
}
