//Run Time Polymorphism
//Overriding
#include<iostream>
using namespace std;
class Parent
{
	public:
        void f1()
        {
        	cout<<"In Parent Class"<<endl;
		}
};
class Child:public Parent
{
	public:
		void f1()
		{
			cout<<"In Child Class"<<endl;
		}
};

int main()
{
	Parent p;
	p.f1();
	Child c;
	c.f1();
	return 0;
}
