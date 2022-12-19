import java.util.Scanner;
class Menuitem {
    String name;
    int price;
    public void setData(String name, int price)
    {
        this.name = name;
        this.price = price;
    }
    public void Display(){
        System.out.println(this.name);
        System.out.println(this.price);
    }
}
public class Restaurant {
    public static void main(String[] args) {
        int b[][] = new int[4][];
        b[0] = new int[4];
        b[1] = new int[2];
        b[2] = new int[3];
        b[3] = new int[1];
        //array of objects
        Menuitem [] objects= new Menuitem[4];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < b[i].length; j++) {
                String name1= sc.nextLine();
                int price1= sc.nextInt();
                objects[i].setData(name1, price1);
            }
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < b[i].length; j++) {
                objects[i].Display();
            }
            System.out.println();
        }

    }
}