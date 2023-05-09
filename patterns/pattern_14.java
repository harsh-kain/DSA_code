import java.util.*;
public class pattern_14 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of n----->    ");
        int n = input.nextInt();
        int i = 1;
        // char ch = 'a';
        while (i<=n) {
            int j = 1;
            int row = i;
            while (j<=n) {
                char newVar = (char) row;
                System.out.print(newVar);
                row++;
                j++;
               
            }
            System.out.println();
            i++;
       
        input.close();
    }
    
}
}


