#include<iostream>
using namespace std;
class largest
{
	private:
		int x,y,z;
		public:
			void input()
			{
				cout<<"\nenter 1st number::";
				cin>>x;
				cout<<"\nenter 2nd number::";
				cin>>y;
				cout<<"\nenter 3rd number::";
				cin>>z;
			}
			void calc()
			{
				int r;
				r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
				cout<<"\nthe largest number among["<<x<<","<<y<<","<<z<<"]="<<r<<"\n";
			}
};
int main()
{
	largest g;
	g.input();
	g.calc();
	return 0;
	}
