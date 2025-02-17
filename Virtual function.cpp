//Run Time Polymorphism
//Virtual Function
#include<iostream>
using namespace std;
class Parent
{
	public:
       virtual void f1()
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
	Parent *p1;
	Child c;
	p1=&c;
	p1->f1();
	return 0;
}
