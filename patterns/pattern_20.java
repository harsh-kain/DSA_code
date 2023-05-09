import java.util.*;
public class pattern_20 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n--->");
        int n = input.nextInt();

        int i = 1;

        while(i<=n){
            int j = 1;
            while(j <= n-i ) {
                System.out.print("*");
                j++;
            }
            System.out.println();
            i++;
        }
        input.close();
    }
}
