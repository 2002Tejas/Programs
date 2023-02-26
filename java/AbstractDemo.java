abstract class Arithmatic
{
    public int Addition(int No1, int No2)
    {
        return No1 + No2;
    }
    public abstract int Substraction (int NO1, int No2);
}
class Marvellous extends Arithmatic
{
    public  int Substraction (int NO1, int No2)
    {
        return No1 - No2;
    }

}
class AbstractDemo
{
    public static void main(String Arr[])
    {
        Marvellous mobj = new Marvellous();
        int Ret = 0;
        Ret = mobj.Addition(11,10);
        System.out.println("Addition is : "+Ret);
        Ret = moj.Substraction(11,10);
        System.out.println("Substraction is : "+Ret);
    }
}