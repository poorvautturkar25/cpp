//Compile Time Polymorphism
#include<iostream>
using namespace std;
class Shapes
{
	public:
		float a;
        void area(int r)
        {
        	a=r*r*3.142;
        	cout<<"Area of Circle:"<<a<<endl;
		}
		void area(int l,int b)
		{
			a=l*b;
			cout<<"Area of Rectangle:"<<a<<endl;
		}
		void area(int b,float h)
		{
			a=0.5*h*b;
			cout<<"Area of Triangle:"<<a<<endl;
		}
};
int main()
{
	shapes s;
	s.area(5);
	s.area(4,6);
	s.area(4,4.5f);
	return 0;
}
