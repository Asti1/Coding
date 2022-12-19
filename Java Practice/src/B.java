class A
{
    void showA()
    {
        System.out.println("It's me,");
    }
}
class B extends A
{
    void showB()
    {
        System.out.println("Hi!! I am the problem it's me!");
    }

    public static void main (String[]args)
    {

        B obj1 =new B();
        obj1.showA();
        obj1.showB();
    }
}
