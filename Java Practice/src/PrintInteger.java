import java.util.Scanner;
public class PrintInteger {
    public static void main(String[] args) {
       int a =10;
       int b = 20;
        System.out.println(a);
        System.out.println(b);
        int temp = 0;
        temp =a;
        a = b;
        b = temp;
        System.out.println(a);
        System.out.println(b);
        a=10;
        b= 20;
       a = a+b;
       b = a-b;
       a = a-b;
        System.out.println(a);
        System.out.println(b);
    }}
