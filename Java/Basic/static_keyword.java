public class static_keyword {

    static int staticVal; // Class variable
    int nonStaticVAl; // Instance variable
    static {
        System.out.println("Inside Static Block");
        staticVal = 10;
        System.out.println("staticVal = " + staticVal + "\n");
        // nonStaticVAl = 10; Error non static variable cannot be used
    }

    static void staticMethod() {
        System.out.println("Inside Static Method\n");
        // nonStaticVAl = 10; Error non static variable cannot be used
        System.out.println("staticVal = " + staticVal);
    }

    void nonStaticMethod() {
        System.out.println("Inside Non-Static Method");
        nonStaticVAl = 10;
        System.out.println("nonStaticVAl = " + nonStaticVAl);
    }

    public static void main(String[] args) {
        // class object
        static_keyword abc = new static_keyword();
        System.out.println("Inside Main (static method)");
        // -----------variables----------------
        System.out.println("staticVal = " + staticVal);
        // nonStaticVAl = 10; Error non static variable cannot be used
        // static int x=1; Illegal modifier, only have static variable at class level
        System.out.println("nonstaticVal = " + abc.nonStaticVAl + "\n"); // Non static value
        // -----------methods------------------
        staticMethod();
        // nonStaticMethod(); Non static method cannot be accessed directly in static
        // method
        abc.nonStaticMethod(); // non static method
    }
}