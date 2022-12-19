class Employee{
    String name;
    String address;
    String gender;
    int age;
    Employee(String name, String address, String gender, int age){
        this.name = name;
        this.address = address;
        this.gender = gender;
        this.age = age;
    }
    public void display(){
        System.out.println("Employee name is "+name);
        System.out.println("Employee address is "+address);
        System.out.println("Employee gender is "+gender);
        System.out.println("Employee age is "+age);
    }
}
class FullTimeEmployee extends Employee{
    int salary;
    String designation;
    FullTimeEmployee(String name, String address, String gender, String designation, int salary, int age){
        super(name,address,gender,age);
        this.designation = designation;
        this.salary = salary;
    }
    public void display(){
        System.out.println("Employee name is "+name);
        System.out.println("Employee address is "+address);
        System.out.println("Employee gender is "+gender);
        System.out.println("Employee age is "+age);
        System.out.println("Employee designation is "+designation);
        System.out.println("Employee salary is "+salary);
    }
}
class PartTimeEmployee extends Employee{
    int workingHours;
    int ratePerHour;
    PartTimeEmployee(String name, String address, String gender, int age, int workingHours, int ratePerHour){
        super(name, address, gender, age);
        this.ratePerHour = ratePerHour;
        this.workingHours = workingHours;
    }
    public int calculatePay(){
        int pay;
        pay = workingHours*ratePerHour;
        return pay;
    }
    public void display(){
        System.out.println("Employee name is "+name);
        System.out.println("Employee address is "+address);
        System.out.println("Employee gender is "+gender);
        System.out.println("Employee age is "+age);
        System.out.println("The payable amount of employee is " + calculatePay());
    }
}
public class work {
    public static void main(String[] args) {
        Employee e1 = new Employee("Mike", "USA", "Male", 20);
        e1.display();
        PartTimeEmployee e2 = new PartTimeEmployee("Ella", "LA", "Female", 19, 8,100);
        e2.display();
        FullTimeEmployee e3 = new FullTimeEmployee("Bob", "NY", "Male", "Head", 10000, 21);
        e3.display();
    }
}
