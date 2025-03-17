#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age:";
	cin>>age;
	
	try
	{
		if(age<0) throw out_of_range("Invalid age");
		cout<<"The age is :"<< age;
		
	}
	
		catch(out_of_range &str)
	{
		cout<<"Exception:"<<str.what();
	}
	return 0; 
}
