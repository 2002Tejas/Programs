#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base (int l)
        {
            A=l;
        }
        
};

class Derived : public Base
{
    public :
        
        Derived (int X):Base(X)
        {}
        float area()
        {
            cout<<A;
        }
       
};

int main()
{
    Derived dboj(5);
    dboj.area();


    return 0;
}