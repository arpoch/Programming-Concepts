public class SleepyThread{
    public static void main(String[] args) throws InterruptedException {
        for(int i=1;i<6;i++){
            System.out.println(i);
            Thread.sleep(4000);
        }
    }
}
