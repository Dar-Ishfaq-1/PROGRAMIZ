public class UniCode
{
  public static void main(String[] args)
  {
    String s1 = "\u00A3 1,000";
    String s2 = new String("\u00A3 1,234");
    System.out.println(s2);
  }
}