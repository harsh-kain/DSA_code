class peakElement {
    static int findPeak(int [] arr , int size)
    {
        int start = 0; 
        int end = size - 1;
        int mid = start + (end-start)/2;
        


        while (start < end) {

            if (arr[mid] < arr[mid+1]) {
                start = mid +1;
            }
            else{
                end = mid;
            }
            mid = start+(end-start)/2;
        }

        return start;
    }
    public static void main(String[] args) {
        int [] arr = {1,2,3,45,4,1,0,0,0};
        System.out.println(findPeak(arr, 5));

    }
}
