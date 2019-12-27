//import java.util.*;

class rectangle {
    public static void main(final String[] args) {
        // Scanner scan = new Scanner(System.in);

        System.out.println("Give input lenght and breadth: ");
        // int col = scan.nextInt();
        // int row = scan.nextInt();

        // System.out.println(row);
        // System.out.println(col);

        // for (int i = 0; i < row; i++) {
        //     for (int j = 0; j < col; j++) {
        //         System.out.print("* ");
        //     }
        //     System.out.print("\n");
        // }

        // int[][] hollowRect = new int[row][col];

        final int row = 5;
        final int col = 5;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i == 0 || i == (row - 1) || j == 0 || j == (col - 1)) {
                    System.out.print("* ");
                }
                else{
                    System.out.print("  ");
                }
            }
            System.out.print("\n");
        }
    }
}