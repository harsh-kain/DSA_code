import java.util.*;
public class pattern_10{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n----->");
        int n = input.nextInt();

        int i = 1;
        while (i<=n) {
            int j = 1;
            while (j<=i) {
                System.out.print(i-j+1);
                j++;
            }
            System.out.println();
            i++;
        }
        input.close();
    }
}