#include<iostream>
using namespace std;
 base
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

};
int main()
{
	derived d;
	d.read();
	d.show();
	return 0;
}
