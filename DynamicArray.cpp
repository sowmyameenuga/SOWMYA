#include<iostream>
using namespace std;
int main()
{
	int i,row,col;
	cout<<"enter number of rows:"<<endl;
	cin>>row;
	cout<<"enter number of columns:"<<endl;
	cin>>col;
	int**arr=new int[row];
	for(i=0;i<row;i++)
	{
		arr[i]=new int[col];
	}
	cout<<"enter values:";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>arr[i][j]
		}
	}
	cout<<"values in array:"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
