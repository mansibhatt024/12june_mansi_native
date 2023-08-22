//parametrize constructor
#include<iostream>
using namespace std;
class construct{
	public:
		construct(int a,int b)//parameterize constructor
		{
			cout<<"addition of two digit is:"<<a+b<<endl;
		}
		
};
int main()
{
	construct obj(258,4);
	return 0;
}
