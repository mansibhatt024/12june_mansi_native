#include<iostream>
using namespace std;
class myoperator
{
	public:
		int n=126;
		myoperator (int n)
		{
			cout<<"value of the data member is: "<<this->n<<endl;
			cout<<"value of the parameter is: "<<n<<endl;
		}
};
int main()
{
	myoperator op(22);
}

