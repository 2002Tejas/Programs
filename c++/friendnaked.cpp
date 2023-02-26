#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i=10;
            j=20;
            k=30;
        }
    friend void fun();    
};
void fun()   //Naked function
{
    Demo obj;
    cout<<"valu of i :"<<obj.i<<"\n";
    cout<<"valu of j :"<<obj.j<<"\n";
    cout<<"valu of k :"<<obj.k<<"\n";
}

int main()
{
    fun();
    return 0;
}