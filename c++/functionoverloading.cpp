#include<iostream>
using namespace std;

class Overloading
{
    public :
        Add(int a,int b)
        {
            cout<<"Addition of two integers is:";
            return a+b;
        }

        Add(float a,float b)
        {
            cout<<"Addition of two floats is:";
            return a+b;
        }

        Add(double a , double b)
        {
            cout<<"Addition of two doubles is:";
            return a+b;
        }

        Add(int a, int b, int c)
        {
            cout<<"Addition of three integers is:";
            return a+b+c;
        }

        void fun(int a,float b)
        {}

        void fun(float x,int y)
        {}

};

int main()
{
    Overloading obj;
    int i;
    float f;
    double d;
    i=obj.Add(10,11);
    cout<<i<<"\n";
    i=obj.Add(11,12,13);
    cout<<i<<"\n";
    f=obj.Add(11.5f,22.3f);             //float sathi f lihayacha
    cout<<f<<"\n";
    d=obj.Add(11.4,3.33);
    cout<<d<<"\n";

    return 0;
}