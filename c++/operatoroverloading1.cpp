#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        Demo(int i, int j)
        {
            A = i;
            B = j;
        }


};

int main()
{
    Demo A(10,20);
    Demo B(30,40);
    Demo Ans(0,0);
    
    Ans =A + B;
     return 0;
}