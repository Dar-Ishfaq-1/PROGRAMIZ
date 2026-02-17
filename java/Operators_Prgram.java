public class Operators_Prgram {
    public static void main(String[] args)
{
    int sum1 = 23+22;
    int sum2 = sum1+5;
    int sum3 = sum1+sum2;
    int div = 5/2;
    int mod = 7%2;
    int inc = sum1++;
    int dec = sum1--;
    int inc1 = ++sum1;
    int dec1 = --sum1;

    
    System.out.println("The arithmetic operations");

    System.out.println(div);
    System.out.println(sum1);
    System.out.println(sum2);
    System.out.println(sum3);

    System.out.println(mod);

    System.out.println("The arithmetic increment/deccrement operations.");

    System.out.println("Post increment : " + inc);
    System.out.println("Post decrement : " + dec);
    System.out.println("Pre increment : " + inc1);
    System.out.println("Pre decrementt : " + dec1);

}

}
