#include<iostream>
using namespace std;
class base
{
	protected:
		int a;
};
class derived:public base
{
	int b;
	public:
		void read()
		{
			cout<<"enter a,b"<<endl;
			cin>>a>>b;
		}
		void show()
		{
			cout<<a<<"\t"<<b;
		}
};
int main()
{
	derived d;
	d.read();
	d.show();
	return 0;
}
