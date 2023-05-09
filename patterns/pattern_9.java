import java.util.*;
public class pattern_9 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n--->");
        int n = input.nextInt();
        int i = 1;
        while(i <=n){
            int j = 1;
            int row = i;
            while (j<=i) {
                System.out.print(row+" ");
                row++;
                j++;
            }
            System.out.println();
            i++;
        }


        input.close();
    }
}
