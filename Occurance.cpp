#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,1,2,44};
	int n,i;
	n=sizeof(arr)/sizeof(arr[0]);
	int occurance[100]={0};
	for(i=0;i<n;i++)
	occurance[arr[i]]++;
	cout<<"elements"<<" "<<"frequency"<<endl;
	for(i=0;i<100;i++)
	{
		if(occurance[i]>0)
		{
			cout<<i<<"  "<<occurance[i]<<endl;
		}
	}
	return 0;
}
