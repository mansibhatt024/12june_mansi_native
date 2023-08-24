#include<iostream>
using namespace std;
int no =100;//declare global variable
int main()
{
	int no=8;//define the local
	cout<<"value of the local variable no is:"<<no<<endl;
	cout<<"value of the global variaable no is:"<<::no<<endl;
	return 0;
}
