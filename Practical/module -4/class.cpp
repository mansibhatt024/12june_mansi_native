//class
#include<iostream>
using namespace std;
class demo{
	public:
		int no;//declare data member
		int getdata()//member function
		{
			cout<<"enter the value of no:";
			cin>>no;//store the value
			return 0;
		}
		void display(){
		cout<<"value of the no is:"<<no;//to print the value
	}
};
int main()
{
	demo obj;
	obj.getdata();
	obj.display();
	return 0;
}
