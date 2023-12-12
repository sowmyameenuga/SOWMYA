#include<iostream>
using namespace std;
int main()
{
	int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k,sum=0;
	cout<<"enter elements of first matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cin>>mat1[i][j];
	}
	cout<<"enter elements of second matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cin>>mat2[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			sum=sum+(mat1[i][k]*mat2[k][j]);
			mat3[i][j]=sum;
		}
	}
	cout<<"result matrix is"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<mat3[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
