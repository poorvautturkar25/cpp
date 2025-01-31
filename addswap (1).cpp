#include<iostream>

using namespace std;

class arithmatic
{
	public:	
		int sum(int a,int b)
		{
			return a+b;
		} 
		
		void swap(int &x,int &y)
		{
			int temp=x;
			x=y;
			y=temp;
		}
	
};
int main()
{
	arithmatic obj;
	int n1,n2;
	
	cout<<"Enter the Two Numbers:";
	cin>>n1>>n2;
	int result=obj.sum(n1,n2);
	cout<<"The sum of "<<n1<<" and "<<n2<<" is: "<<result<<endl;
	
	cout<<"Before Swapping:"<<endl;
	cout<<"n1:"<<n1<<"\tn2:"<<n2<<endl;
	obj.swap(n1,n2);
	cout<<"n1:"<<n1<<"\tn2:"<<n2<<endl;
	return 0;
}
