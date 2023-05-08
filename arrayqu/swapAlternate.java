class swapAlternate {
    static void alternate(int[] arr, int size){
        
        for (int i = 0; i < size; i+=2) {
            
                if (i+1 < size) {  
                    int temp;
                    temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                }
            
        }
    }
    static void  printArr(int[] arr, int size){
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7};
        alternate(arr,7);
        printArr(arr, 7);

    }
}