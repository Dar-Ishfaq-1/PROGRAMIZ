
public class university {

    public String Name;
    public int Estab;
    public String Type;

    public static void main(String[] args) {

        university obj = new university();

        obj.Name = "iust";
        obj.Estab = 2015;
        obj.Type = "private";

        System.out.println("University Name: " + obj.Name);
        System.out.println("University Establish. : " + obj.Estab);
        System.out.println("University Type : " + obj.Type);

    }
}
