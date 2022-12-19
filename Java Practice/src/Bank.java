abstract class Accounts {
    int balance;
    int accountNumber;
    String accountHolder;
    String address;
    Accounts(int balance,int accountNumber,String accountHolder,String address){
        this.balance=balance;
        this.accountHolder=accountHolder;
        this.accountNumber=accountNumber;
        this.address=address;
    }
    abstract void withdraw();
    abstract void deposit();
    void display() {
        System.out.println("The balance of account number " + accountNumber + " is " + balance);
    }
}
class SavingsAccount extends Accounts{
    int rateOfInterest;
    void withdraw(){
        System.out.println("Money withdrawn");
    }
    void deposit(){
        System.out.println("Money deposited");
    }
    int calculateAmount(){
        int total = balance*rateOfInterest;
        return total;
    }
    SavingsAccount(int balance, int accountNumber, String accountHolder, String address, int rateOfInterest){
        super(balance,accountNumber,accountHolder, address);
        this.rateOfInterest = rateOfInterest;
    }
    void display(){
        System.out.println("The balance is "+ balance);
        System.out.println("The account number is "+ accountNumber);
        System.out.println("The account holder is "+ accountHolder);
        System.out.println("The address is "+ address);
        System.out.println("The rateOfInterest is "+ rateOfInterest);
        System.out.println("The total balance is "+ calculateAmount());
    }}
class CurrentAccount extends Accounts{
    int overDraftLimit;
    void withdraw(){
        System.out.println("Money withdrawn");
    }
    void deposit(){
        System.out.println("Money deposited");
    }
    CurrentAccount(int balance, int accountNumber, String accountHolder, String address, int overDraftLimit){
        super(balance,accountNumber,accountHolder, address);
        this.overDraftLimit= overDraftLimit;
    }
    void display(){
        System.out.println("The balance is "+ balance);
        System.out.println("The account number is "+ accountNumber);
        System.out.println("The account holder is "+ accountHolder);
        System.out.println("The address is "+ address);
        System.out.println("The overdraft limit is "+ overDraftLimit);
    }
}
public class Bank {
    public static void main(String[] args) {
        Accounts a1 = new SavingsAccount(50000,123,"Mike","USA",15);
        a1.display();
        a1.deposit();
        a1.withdraw();
        Accounts a2 = new CurrentAccount(25000,345,"Ella","NY",30000);
        a2.display();
        a2.deposit();
        a2.withdraw();
    }}
