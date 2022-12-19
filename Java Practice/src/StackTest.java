import java.util.Scanner;

interface Stack{
    void push(int s[]);
    int pop(int s[]);
    void display(int s[]);
}
class Stack1 implements Stack{
    Scanner sc = new Scanner(System.in);
    int top = -1;
    public void push(int s[]){
        int val;
        if(top>=s.length-1){
            System.out.println("Stack overflow");
            return;
        }
        System.out.println("Enter any value: ");
        val = sc.nextInt();
        top++;
        s[top] = val;
    }
    public int pop(int s[]){
        if(top==-1){
            System.out.println("Stack Underflow");
            return -1;
        }
        return s[top--];
    }
    public void display(int s[]){
        int i;
        if(top==-1){
            System.out.println("Stack Underflow");
            return;
        }
        else{
            System.out.println("Stack has values:");
            for(i =top; i>=0;i--){
                System.out.println(s[i]);
            }
        }
    }
}
public class StackTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s[] = new int[5];
        Stack1 s1 = new Stack1();
        int y, choice;
        do
        {
            System.out.println();
            System.out.println("----MENU----");
            System.out.println(" 1. PUSH");
            System.out.println(" 2. POP");
            System.out.println(" 3. DISPLAY");
            System.out.println(" 4. QUIT");
            System.out.println("Enter Your Choice:");
            choice=sc.nextInt();
            switch (choice) {
                case 1 -> s1.push(s);
                case 2 -> {
                    y = s1.pop(s);
                    if (y != -1) {
                        System.out.println("The popeed value is " + y);
                    }
                }
                case 3 -> s1.display(s);
                case 4 -> System.out.println(" GOOD BYE");
                default -> System.out.println(" Invalid Choice");
            }
        }while(choice!=4);
    }
}


