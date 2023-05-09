/**
 * pattern_1
 */
class patterSquare{
    public void pattern(int n){
        int i=1;
        while (i<=n ) {
            int j = 1;
            while (j<=n) {
                System.out.print(" * ");                
                j++;
            }
            System.out.println();
            i++;
        }
    }
}
public class pattern_1 {

    public static void main(String[] args) {
        patterSquare firstPattern = new patterSquare();
        firstPattern.pattern(5);
    }
}