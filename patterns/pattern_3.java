import java.util.Scanner;
public class pattern_3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the value of n");
        int n = input.nextInt();

        int i = 1;
        while (i<=n) {
            int j = 1;
            while (j<=n) {
                System.out.print(j+" ");
                j++;
            }
            System.out.println();
            i++;
        }
        input.close();
    }
}
