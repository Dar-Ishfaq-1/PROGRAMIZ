public class ArraysInDepth{

    public static void main(String []args)
    {
       /* PROGRAM LISTING 1 - REFERENCE VARIABLES & VARIABLE LENGTH ARRAYS */
       int arr0[][] = {{1,2,3},{1,2},{1,2,3,4,5}};
       int arr1[][];
       arr1 = new int[3][];
       arr1 = arr0;
       System.out.println(arr1[2][2]); 
       
       /* PROGRAM LISTING 2 - VARIABLE LENGTH ARRAYS */ 
       int arr3[][]; 
       arr3 = new int[3][];
       int OneD[] = {66,77,88,99};
       arr3[0] = OneD;
       System.out.print(arr3[0][2]); 

       /* PROGRAM LISTING 3 - OTHER PERSPECTIVE */
       int arr4[][] = new int[3][];
       arr4[0] = new int[2];
       arr4[1] = new int[3];
       arr4[2] = new int[4];
       for(int i = 0;i < arr4[0].length; i ++) arr4[0][i] = i + 10;
       for(int i = 0;i < arr4[1].length; i ++) arr4[1][i] = i + 10;
       for(int i = 0;i < arr4[2].length; i ++) arr4[2][i] = i + 10;
    }
}