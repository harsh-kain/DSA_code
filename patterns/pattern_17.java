import java.util.*;
public class pattern_17 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n--->");
        int n = input.nextInt();

        int i = 1;

        while(i<=n){
            int j = 1;
            while (j<=i) {
                int value = 65 + i + j -2;
                char ch = (char) value;
                System.out.print(ch);
                j++;
            }
            System.out.println();
            i++;
        }
        input.close();
    }
}
