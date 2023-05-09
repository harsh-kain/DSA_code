import java.util.Scanner;

public class pattern_2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);  
        System.out.println("enter the value of n");
        int n = input.nextInt();
        
        int i = 1;
        while (i<=n) {
            int j = 1;
            while (j<=n) {
                System.out.print(i+" ");
                j++;
            }
            System.out.println();
            i++;
        }
        input.close();
    }
}
