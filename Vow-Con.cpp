#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter an alphabet:";
	cin>>c;
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		cout<<c<<" is a vowel"<<endl;
	}
	else
	{
		cout<<c<<" is a consonant"<<endl;
	}
	return 0;
}

