import java.util.Arrays;

public class Count {
    public static void main(String[] args) {
        String a= "Hello World";
        int w=1, c=0;
        a = Arrays.toString(a.toCharArray());
        for(int i =0; i<a.length();i++){
            if(a.charAt(i) ==' ' && a.charAt(i+1)==' '){
                w++;
            }
           if(a.charAt(i) !=' '){
               c++;
           }
        }
        System.out.println("The no of words are "+ w);
        System.out.println("The no of characters are "+ c);
    }
}
