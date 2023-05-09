import java.util.Scanner;
public class pattern_8 {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n--->");
        int n = input.nextInt();
        int i = 1;
        int count = 1;
        while(i <=n){
            int j = 1;
            while (j<=i) {
                System.out.print(count+" ");
                count++;
                j++;
            }
            System.out.println();
            i++;
        }


        input.close();
    }
}
