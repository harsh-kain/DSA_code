public class uniqueEle {
    static void unique(int [] arr , int size){
        int ans=0;
        for (int i = 0; i <= size; i++) {
            // System.out.println(arr[i]);
            ans = ans ^ arr[i];
        }

        System.out.println(ans);

    }
    public static void main(String[] args) {
        int [] arr = {1,1,3,3,4,4};
        unique(arr, 5);
    }   
}
