class eleIntersection {
    static void findIntersection(int[]arr1, int[]arr2, int n, int m){
        int sizeofArr;
        if (n>m) {
            sizeofArr = n;
        }
        else{
            sizeofArr = m;
        }

        int[] arr3 = new int[sizeofArr];

        int count = 0;
        for (int i = 0; i < n; i++) {
            // int ele = arr1[i];
            Boolean match = false;
            for (int j = 0; j < m; j++) {
                if (arr1[i] == arr2[j]) {
                    arr3[count] = arr2[j];
                    match = true;
                    // System.out.println(count);
                    arr2[j] = -1;
                    break;
                }
            }
            if (match) {
                count++;
            }

        }
        for (int i = 0; i < arr3.length; i++) {
            System.out.println(arr3[i]);
        }
    }
    public static void main(String[] args) {
        int[] arr1 = {1,2,3,4,4,5};
        int[] arr2 = {1,1,3,3,5,5};
        findIntersection(arr1, arr2, 6, 6);
    }
}
// O(i+j);