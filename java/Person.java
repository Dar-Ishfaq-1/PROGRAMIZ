
public class Person {

    public String Name;
    public int Age;
    public float Height;

    public static void main(String[] args) {

        Person obj = new Person();

        obj.Name = "Moeed";
        obj.Age = 25;
        obj.Height = 5.50f;

        System.out.println("Name : " + obj.Name);
        System.out.println("Age : " + obj.Age);
        System.out.println("Height : " + obj.Height);

    }
}
