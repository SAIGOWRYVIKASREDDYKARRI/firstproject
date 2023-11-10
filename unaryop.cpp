#include<iostream>
using namespace std;
class unaryop
{
	int x,y,z;
	public:
		unaryop()
		{
		}
		unaryop(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
		}
		friend unaryop operator - (unaryop i)
		{
			unaryop k;
			k.x=-i.x;
			return k;
		}
};
int main()
{
	unaryop u;
	u=unaryop(5,-9,8);
	u.display();
	return 0;
}
