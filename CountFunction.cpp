#include<iostream>
using namespace std;
int wordcount(string s)
{
int count=1,i;
int n=s.length();
for(i=0;i<n;i++)
{
	if(s[i]==' ')
	count++;
}
return (count);
}
int main()
{
	string str;
	cout<<"enter a string:";
	getline(cin,str);
	cout<<"word count="<<wordcount(str)<<endl;
	return 0;
}
