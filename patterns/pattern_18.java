
import java.util.*;
public class pattern_18 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n--->");
        int n = input.nextInt();

        int i = 1;

        while(i<=n){
            int j = 1;
            int value = 65 + n -i;
            while (j<=i) {
                char ch = (char) value;
                System.out.print(ch);
                value++;
                j++;
            }
            System.out.println();
            i++;
        }
        input.close();
    }
}
