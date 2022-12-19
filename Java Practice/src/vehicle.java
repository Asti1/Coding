class MotorVehicle{
    String modelName;
    int modelNumber;
    float modelPrice;
    MotorVehicle(String modelName, int modelNumber, float modelPrice){
        this.modelName = modelName;
        this.modelNumber = modelNumber;
        this.modelPrice = modelPrice;
    }
    public void display(){
        System.out.println(this.modelName);
        System.out.println(this.modelNumber);
        System.out.println(this.modelPrice);
    }
}
class Car extends MotorVehicle{
    Car(String modelName, int modelNumber, float modelPrice){
        super(modelName, modelNumber, modelPrice);
    }
    int discountRate;
    public void display(){
        System.out.println(this.modelName);
        System.out.println(this.modelNumber);
        System.out.println(this.modelPrice);
        System.out.println(this.discountRate);
    }
    public void setDiscountRate(){
        this.discountRate = 12;
    }}
public class vehicle {
    public static void main(String[] args) {
        Car c1 = new Car("Ferrari", 123, 1.0f);
        c1.setDiscountRate();
        c1.display();
    }}
