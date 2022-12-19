import java.util.Scanner;
public class MaxMinDiff {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int diff = 0;
        int max, min;
        max = min = arr[0];
        for(int i =0; i<n;i++){
            for(int j=i+1;j<n;j++){
                diff = arr[i] - arr[j];
                if(diff>max){
                    max = diff;
                }
                if(diff<min){
                    min = diff;
                }
            }
        }
        System.out.println("The max difference is "+ max+" and the min difference is "+ min);
    }
}
