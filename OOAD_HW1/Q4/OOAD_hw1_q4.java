package Q4;

/* Zoo Main Program
 * Makes a zookeeper, gives him/her a zoo to keep.
 * The zookeeper then makes the animals do things so he/she can pay the bills.
 */
public class OOAD_hw1_q4 {

	// No CLI, thus parameter is superfluous.
	public static void main(String[] args) {
		
		zooKeeper alfred = new zooKeeper(new zoo());	// Make a new zooKeeper with a new zoo object as it's parameter
		// The new zoo is automatically populated in it's constructor
		alfred.wakeUp();	// Wake the animals up (wake up)
		alfred.rollCall();	// Make sure no animals escape (they respond with noises) (roll call)
		alfred.feed();		// Feed the animals. (feed)
		alfred.exercise();	// Exercise the animals. (exercise)
		alfred.close();		// Close the zoo, make the animals sleep(?) (close)

	}

}
