import java.util.Scanner;

public class newPattern {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Size of pattern: ");
        int m = input.nextInt();

        int i = 97;
        int end_i = i + (m - 1);
        while (i <= end_i) {
            int j = i;
            int end_j = i + (m - 1);
            while (j <= end_j) {
                char ch = (char) j;
                System.out.print(ch);

            }
            System.out.println();
            i++;
        }
        input.close();

    }
}