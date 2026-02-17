
    class Operators
{
   public static void main(String[] args)
   {
      int a = 9 / 2;  // 4
      int b = 9 % 2;  // 1
      System.out.print("The first value of  b = " + b +".");
      int c = b ++;   // c=1, b=2
      
      System.out.print("\na = " + a);   //4
      System.out.print("   b = " + b);//2
      System.out.print("   c = " + c);//1
      int d = -- c; //0
      System.out.print("   d = " + d);//0

      System.out.print("   " + (a != c));

      System.out.println();

      int e = 4 & 5;   //0100&0101=0100
      System.out.print("e " + e);//0

      int f = 4;
      int g = f << 1;
      System.out.print("   g " + g);//0

      int r_shift = -2147483648; 
      int h = r_shift >> 1;
      int i = r_shift >>> 1;
      System.out.print("   h " + h);//0
      System.out.print("   i " + i);//0
   }
}

