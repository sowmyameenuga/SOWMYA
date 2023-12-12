#include<iostream>
using namespace std;
int main()
{
 int n,square,rem,sum=0;
 cout<<"enter a number:"<<endl;
 cin>>n;
 square=n*n;
 while(square>0)
 {
 	rem=square%10;
 	sum=sum+rem;
 	square=square/10;
 }
 if(sum==n)
 cout<<"it is a neon number"<<endl;
 else
 cout<<"it is not a neon number"<<endl;
 return 0;
}
