import java.util.*;
public class pattern_15{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n----->");
        int n = input.nextInt();

        int i = 1;
        char ch = 'a';
        while (i<=n) {
            int j = 1;
            while (j<=i) {
                System.out.print(ch);
                j++;
            }
            System.out.println();
            ch++;
            i++;
        }
        input.close();
    }
}