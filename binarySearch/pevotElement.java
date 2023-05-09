public class pevotElement {
    static int findPevot(int [] arr, int size){
        int start = 0;int end = size-1; int mid = start+(end-start)/2;
        while (start < end) {
            if (arr[mid] >= arr[0]) {
                start = mid+1;
            }
            else{
                end = mid;
            }
            mid = start+(end-start)/2;
        }
        return end;
    }
    public static void main(String[] args) {
        int [] arr = {45,67,2,4,6};
        System.out.println(findPevot(arr, 5));
        
    }
    
}
