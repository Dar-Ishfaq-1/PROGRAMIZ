public class Array {
    public static void main(String[] args) {

        int[][] arr = { { 1, 3, 2, 4 }, { 1, 3, 2 } };

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) { // Use arr[i].length for the number of columns
                System.out.print(arr[i][j] + " ");
            }
            System.out.println(); // New line for better output formatting
        }
    }
}
