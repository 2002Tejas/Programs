#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int*Arr;

        Array(int iLength)
        {
            cout<<"inside constructor \n";
            isize=iLength;
            Arr= new int[iSize];
        }
        ~Array()
        {
             cout<<"inside destructor \n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the value\n";
            int i = 0;

            for(i = 0;i<iSize;i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"Elements of array are : \n";
            int i = 0;
            for(i =0;i<iSize;i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int Summation()
        {
            int iSum=-,i=0;
            for(i=0;i<iSize;i++)
            {
                iSum=iSum+Arr[i];
            }
        }
};
int main()
{
    cout<<"inside main \n";
    iRet=0;

    Array obj1(4);

    obj1.Accept();
    obj1.Display();

    iRet=obj1.Summation();
    

    return 0;
}