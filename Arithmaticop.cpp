#include<iostream>
using namespace std;  

class operation
{
	public:
		int a,b;
		
		void get()
		{
			cout<<"Enter First Number  :";
			cin>>a;
			cout<<"Enter Second Number  :";
			cin>>b;
		}
		int sum()
		{
			return a+b;
		}
		int sub()
		{
			return a-b;
		}
		int multi()
		{
			return a*b;
		}
		float div()
		{
			return (float)a/b;
		}
		
		void show()
		{
			cout<<"Addition :"<<sum();
		    cout<<"\nSubtraction :"<<sub();
		    cout<<"\nMultiplication :"<<multi();
		    cout<<"\nDivision :"<<div();
		}
};
int main()
{
	operation n;
	n.get();
	n.show();
}
	

