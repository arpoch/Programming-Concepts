public class Interrupt_Join{
	
    public static void main(String[] args) throws InterruptedException {
        Thread t = new Thread(new MsgLoop());
        t.start();//Starting Thread MsgLoop
        t.join(3000);//Stop Main thread and wait of 5 seconds
        if(t.isAlive()){
            System.out.println("Time Over, interrupting from "+Thread.currentThread().getName());
            t.interrupt();            
        }
        t.join();//The thread is not killed/stoped but its still working in backgroud,thus waiting
                 //for it to complete, ITS NOT THE MAIN THREAD,BUT IT IS CALLED IN THE MAIN THREAD.
        System.out.println("Task Completed");
    }    
}
class MsgLoop implements Runnable{
    @Override
    public void run() {
        for(int i=1;i<16;i++){
            try {
                Thread.sleep(1000);//Sleep for 1 sec , but depeneds on OS
                System.out.println(i);
            } catch (InterruptedException e) {                			
                System.out.println("Could not Finish the "+Thread.currentThread().getName());
            }    
        }
    }
}