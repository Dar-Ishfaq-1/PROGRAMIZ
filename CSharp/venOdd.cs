using system 

class NumberChecker
{
  static void Main()
  {
    Console.writeLine("Enter the number:");
    int number = Convert.ToInto32(Cosole.ReadLine());
    if(number%2==0)
    Cosole.WriteLine($"{number} is: an even number" );

    else 
    {
      Cosole.WriteLine($"{number} is an odd number" );
    }

  }
}