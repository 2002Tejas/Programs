#include<iostream>
//using namespace std;
namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                std::cout<<"Inside fun of Demo from marvellous\n";
            }

    };
    class Hello
    {
        public:
            int x,y;
    };
}
namespace infosystems
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
                std::cout<<"Inside fun of Demo from infosystems\n";
            }
    }
}
int main()
{
    Marvellous::Demo obj1;
    obj1.fun();
    infosystems::Demo obj2;
    obj2.fun();

    using namespace Marvellous;
    Hello hobj;
    Demo obj3;

    return 0;
}
