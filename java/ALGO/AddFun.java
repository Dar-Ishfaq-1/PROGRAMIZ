import java.util.Scanner;

public class AddFun {

    public static void main(String args[]) {
    Scanner obj = new Scanner(System.in);

    System.out.print("Enter your first number: ");
    int num = obj.nextInt();

    System.out.print("Enter your second number: ");
    int num1 = obj.nextInt();

    int sum = num+num1;

    System.out.println("The sum of the two numbers is " + sum);
        
    }

}