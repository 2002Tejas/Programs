#include<iostream>
using namespace std;

class Maximum
{
   public:
   maximum(int A, int B)
   {
      if(A>B)
      {
      cout<<A<<" is Maximum\n";
      }
      else
      {
         cout<<B<<" is Maximum\n";
      }

   }
};


int main()
{
   int no1 = 0;
   int no2 = 0;

   cout<<"Enter two Numbers\n";
   cin>>no1>>no2;
   
   Maximum obj;
   obj.maximum(no1,no2);

  
}