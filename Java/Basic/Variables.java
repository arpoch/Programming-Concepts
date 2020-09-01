
public class Variables {
    int x = 10; // Instance Field(unique for each class)
    static int y = 20; // Class Field(Same for each class)
    // ------------------DataTypes------------------
    byte bt;
    short sh;
    int in;
    long lg;
    float fl;
    double db;
    char ch;
    boolean bool;
    String str;

    public static void main(String[] args) {
        int z = 30; // Local variables
        // System.out.println("Values of x = " + Variables.x); Error 'Static methods,
        // instance variables'
        System.out.println("Values of y = " + Variables.y); // Success Static method, Static variable
        System.out.println("Value of z = " + z);
    }
}