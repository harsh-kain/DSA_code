import java.util.*;
public class pattern_19 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n--->");
        int n = input.nextInt();

        int i = 1;

        while (i<=n) {
            int space = n-i;
            while (space >= 0) {
                System.out.print(" ");
                space--;
            }
            int j = 1;
            while (j<=i) {
                System.out.print("*");
                j++;
            }
            System.out.println();
            i++;
        }

        input.close();
    }
}
