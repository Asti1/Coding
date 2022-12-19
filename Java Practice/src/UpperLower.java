import java.util.Scanner;

public class UpperLower {
    public static void main(String[] args) {
        String a;
        Scanner sc = new Scanner(System.in);
        a = sc.next();
        System.out.println(a);
        a= a.toLowerCase();
        System.out.println(a);
        a= a.toUpperCase();
        System.out.println(a);
    }
}
