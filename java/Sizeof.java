public class Sizeof {
    public static void main(String[] args) {
        System.out.println("The size of short in bytes: " + Short.BYTES);
        System.out.println("The size of long in bytes: " + Long.BYTES);
        System.out.println("The size of float in bytes: " + Float.BYTES);
        System.out.println("The size of double in bytes: " + Double.BYTES);
        System.out.println("The size of byte in bytes: " + Byte.BYTES);
        
        // Boolean size cannot be determined directly in Java
        System.out.println("The size of boolean: JVM-dependent (not standard)");
    }
}
