#include<iostream>
using namespace std;
int main()
{
	int arr[100],position,c,n,value;
	cout<<"enter number of elements in array:";
	cin>>n;
	for(c=0;c<n;c++)
	{
		cin>>arr[c];
	}
	cout<<"enter the position of array to insert"<<endl;
	cin>>position;
	cout<<"enter the value to insert"<<endl;
	cin>>value;
	for(c=n-1;c>=position-1;c--)
	{
		arr[c+1]=arr[c];
	}
	arr[position-1]=value;
	cout<<"resultant array is"<<endl;
	for(c=0;c<=n;c++)
	{
		cout<<arr[c];
	}
	return 0;
}
