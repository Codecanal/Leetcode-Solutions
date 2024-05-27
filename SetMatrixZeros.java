package DSA.Leetcode;

import java.util.Scanner;
import java.util.Set;

public class SetMatrixZeros {
    public void markRows(int[][] matrix, int i){

    }
    public void markCols(int[][] matrix, int j){

    }
    public void setzeros(int [][] matrix){
       //check sum for the rows
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){

            }
        }

    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
//        int rows = in.nextInt();
//        int cols = in.nextInt();
        int [][] matrix = new int[3][3];
        matrix[0] = new int[]{1,1,1};
        matrix[1] = new int[]{1,0,1};
        matrix[2] = new int[]{1,1,1}; 
        SetMatrixZeros s1 = new SetMatrixZeros();
        s1.setzeros(matrix);

        int col = matrix[0].length;
        int rows = matrix.length;



    }

}
