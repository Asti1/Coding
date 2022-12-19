import java.util.Locale;
interface Reversal {
    void reverse(String a);
}
class rev implements Reversal{
    @Override
    public void reverse(String a) {
        String r="";
        for(int i=a.length()-1; i>=0;i--){
            r = r + a.charAt(i) ;
        }
        System.out.println(r);
    }
}
class imp {
    public static void main(String[] args) {
        String a = "Hello";
        rev change = new rev();
        change.reverse(a);

    }
}

