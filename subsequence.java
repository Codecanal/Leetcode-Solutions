package DSA.Leetcode;

public class subsequence {
    public static int[] solve(int [] arr, int[] output, int index){
        if(index > arr.length) {
            return output;
        }
        //exclude
        solve(arr,output, index+1);

        //include
        int elemment = arr[index];
        return output;


    }
    public static void main(String[] args) {
        int[] arr = {1, 2, 3};
        int[] output;
        int index = 0;
        System.out.println(solve(arr,output,index));

    }


}
