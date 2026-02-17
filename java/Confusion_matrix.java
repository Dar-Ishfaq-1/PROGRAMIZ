public class Confusion_matrix
{
    public static void main(String [] args)
    {
        String[][] matrix =
            {{"TT","TF"},
            {"FT","FF"}};

        int i,j;
        for( i=0;i<matrix.length;i++)
        {
            for(j=0;j<matrix.length;j++){
            System.out.println(matrix[i][j]);
            }
        }

        }

        


}