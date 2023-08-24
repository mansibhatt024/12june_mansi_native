#include<iostream>
using namespace std;

class CopyClass
{
    public:
        int n;
        
        CopyClass(int no)
        {
            n = no;
        }
        
        CopyClass(const CopyClass& d1) // Define copy constructor
        {
            n = d1.n; // Just copy the value, no need to modify
        }
        
        void display() // Display function to print value
        {
            cout << "value of n is: " << n << endl;
        }
};

int main()
{
    CopyClass obj1(12);
    obj1.display();
    
    CopyClass obj2 = obj1;
    obj2.display();
    
    return 0;
}

