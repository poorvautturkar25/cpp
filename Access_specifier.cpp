#include<iostream>
using namespace std;

class Base
{
	public:
		int a=10;
	protected: int b=20;
	private: int c=30;
	
	public:
		void show()
		{
			cout<<b<<" "<<c;
		}
	
};
class Derived:protected Base
{
	public:
		void get()
		{
			show();
		}
		void set()
		{
			cout<<"\t"<<a<<endl;
		}
};
int main()
{
    Derived d1;
    d1.get();
    d1.set();
     return 0;
}
