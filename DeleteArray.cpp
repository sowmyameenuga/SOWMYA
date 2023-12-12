#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],i,pos;
	cout<<"enter the size of the array:";
	cin>>n;
	cout<<"enter the elements of the array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the elements of array before deletion are:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"enter the position of elements to be deleted:"<<endl;
	cin>>pos;
	--pos;
	for(i=pos;i<=n;i++)
	{
		arr[i]=arr[i+1];
	}
	cout<<"elements of array,after deletion are:"<<endl;
	for(i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
