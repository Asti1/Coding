public class Inheritance {
    double l;
    double h;
    double w;
    Inheritance(){
        this.h = 2;
        this.l = 3;
        this.w = 4;
    }
    Inheritance(double side){
        this.l = side;
        this.h = side;
        this.w = side;
    }
    Inheritance(Inheritance old){
        this.h = old.h;
        this.l = old.l;
        this.w = old.w;
    }

    public Inheritance(double l, double h, double w) {
    }

    public static void main(String[] args) {

    }
}
