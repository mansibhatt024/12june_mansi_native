//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class construct
{
	public:
	int a,b;
	construct()//default constructor
	{
		cout<<"enter the value of a and b:";
		cin>>a>>b;
	}
	void print(){
		cout<<"addition of the a and b is: "<<a+b<<endl;
		cout<<"substraction of a and b is: "<<a-b<<endl;
		cout<<"division of a and b is: "<<a/b<<endl;
		cout<<"multiplication of a and b is: "<<a*b<<endl;
	}	
};
int main()
{
	construct obj;
	obj.print();
	return 0;
}
