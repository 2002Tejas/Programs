#include<iostream>
using namespace std;
// call by value
void fun(int no)
{
    cout<<"Inside call by value :"<<no<<"\n";
}

//call by address
void gun(int *p)
{
    cout<<"Inside call by address :"<<*p<<"\n";
}
//call by reference
void sun(int &ref)
{
    cout<<"Inside call by reference :"<<ref<<"\n";
}
int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);
    gun(&j);
    sun(k);

    return 0;
}