#include<iostream>
using namespace std;
class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        base()
        {
            i=10;
            j=20;
            k=30;
        }
       
};

class Derived :public Base
{
    public :
    void fun()
    {
        cout<<"value of public i of base :"<,i<<"\n";
        // cout<<"value of public j of base :"<,i<<"\n";
        cout<<"value of public k of base :"<,i<<"\n";
    }
};

int main()
{
   Derived dobj;
   doj.fun();

    return 0;
}