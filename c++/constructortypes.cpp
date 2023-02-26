#include<iostream>
using namespace std;

class Demo
{
    public :
        int i,j;
        Demo()
        {
            i=0;
            j=0;
        }
        Demo(int a,int b)
        {
            i=a;
            j=b;
        }
        Demo(Demo &ref)
        {

        }
}
int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);
    
    return 0;
}