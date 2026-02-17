public class Concatenation {
    public static void main(String[] args) {
        
        String txt1 = "Ashfaq";
        String txt2 =  "Dar";

        String txt = txt2 + " " + txt1;

        System.out.println(txt);
        System.out.println("Hello\fWorld");
        System.out.println("Hello\nWorld");
        //overwrites world on Hello
        System.out.println("Hello\rWorld");

        



    }

}
