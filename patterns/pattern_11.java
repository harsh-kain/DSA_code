import java.util.*;

public class pattern_11 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the value of N");
        int n = input.nextInt();
        int i = 1;
        char a = 'a';
        while (i <= n) {
            int j = 1;
            while (j<=n) {
                System.out.print(a);
                a++;
                j++;
            }
            System.out.println();
            a = 'a';
            i++;

        }
        input.close();

    }
}
