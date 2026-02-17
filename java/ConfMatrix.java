import java.util.Scanner;

class ConfMatrix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the size of the matrix
        System.out.println("Enter the size of the confusion matrix:");
        int n = scanner.nextInt();

        int[][] arr = new int[n][n];
        System.out.println("Enter the confusion matrix elements (row by row):");

        // Input the confusion matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }

        // Variables to store TP, TN, FP, FN
        int TP = 0, TN = 0, FP = 0, FN = 0;

        // Calculate the metrics
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    TP += arr[i][j]; // True Positives
                } else {
                    FN += arr[i][j]; // False Negatives
                    FP += arr[j][i]; // False Positives
                }
            }
        }

        // Calculate TN (total - TP - FP - FN)
        int total = 0;
        for (int[] row : arr) {
            for (int value : row) {
                total += value;
            }
        }
        TN = total - TP - FP - FN;

        // Output the results
        System.out.println("Confusion Matrix:");
        for (int[] row : arr) {
            for (int value : row) {
                System.out.print(value + " ");
            }
            System.out.println();
        }

        System.out.println("True Positives (TP): " + TP);
        System.out.println("True Negatives (TN): " + TN);
        System.out.println("False Positives (FP): " + FP);
        System.out.println("False Negatives (FN): " + FN);

        scanner.close();
    }
}
