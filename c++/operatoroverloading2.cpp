#include<iostream>
using namespace std;

class Demo
{
    private:
        int A,B;
    public:
        Demo(int i, int j)
        {
            A = i;
            B = j;
        }
        void Display()
        {
            cout<<Ans.A<<"\n";
            cout<<Ans.B<<"\n";

        }
        friend Demo operator +(Demo, Demo)
        friend Demo operator -(Demo, Demo)
        friend Demo operator *(Demo, Demo)

};

Demo operator +(Demo obj1, Demo obj2)
{
    return Demo(obj1.A+obj2.A,obj2.B+obj2.B);

}
Demo operator -(Demo obj1, Demo obj2)
{
    return Demo(obj1.A-obj2.A,obj2.B-obj2.B);

}
Demo operator *(Demo obj1, Demo obj2)
{
    return Demo(obj1.A*obj2.A,obj2.B*obj2.B);

}

int main()
{
    Demo A(10,20);
    Demo B(30,40);
    Demo Ans;
    
    Ans =A + B;
    Ans.Display();

    Ans =A - B;
    Ans.Display();

    Ans =A * B;
    Ans.Display();

    return 0;
}