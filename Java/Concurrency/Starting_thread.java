public class Starting_thread implements Runnable{
    
    //The main thread is the starting thread.
    public void run(){
        System.out.println("Hello from a Runnable!");
    }
    public static void main(String[] args) {
        System.out.println("In Main-thread");
        new Thread(new Starting_thread()).start();
        new HelloThread().start();
    }
}

class HelloThread extends Thread{
    public void run(){
        System.out.println("Hello from a thread!");
    }
}
