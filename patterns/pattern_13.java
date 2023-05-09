import java.util.*;
public class pattern_13 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n-----<");
        int n = input.nextInt();
        char ch = 'a';
        int i = 1;
        while (i<=n) {
            int j = 1;
            while (j<=n) {
                System.out.print(ch);
                j++;
                ch++;
            }
            System.out.println();
            i++;
            
        }
        input.close();
    }
    
}
