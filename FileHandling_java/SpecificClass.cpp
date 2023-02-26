#include<iostream>
using namespace std;


class Array
{
   public :
   int *Arr;
   int iSize;

   Array(int length)
   {
    Size = length;
    Arr = new int[Size];
   }
   void Accept()
   {
    cout<<"Enter the value \n";
    for(int i =0; i<Size;i++)
    {
        cin>>Arr[i];
    }
    void Display()
    {
        for(int i =0; i<Size;i++)
        {
            cout<<Arr[i];
        }
    }
   }
}


int main()
{
    Array obj1(5);

    obj1.Accept();
    obj1.Display;

    return 0;
}