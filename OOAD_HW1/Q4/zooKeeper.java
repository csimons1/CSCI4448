package Q4;
import java.util.LinkedList;
import java.util.List;

/* Zookeeper Class
 * Takes in a zoo object as as parameter, iterates through the animals in the zoo, and
 * sends a message to each instance as to what method (makeNoise(), eat(), etc.) to call.
 */
public class zooKeeper {

	private zoo Z;
	List<animal> animals;	// This will come from the zoo object 'Z'
	
	public zooKeeper() {
		//Keep the zoo empty? Don't use the default.
	}
	
	// Set the zoo private member to a zoo object. The zookeeper manages this object.
	public zooKeeper(zoo Z){
		this.Z = Z;
		this.animals = Z.getAnimals();	// List of the animals at the zoo.
	}
	
	/* Zookeeper Actions
	 * iterates over the list, gets an animal from the zoo list, and tells it what to do.
	 * That instance of that animal object will perform the action.
	 */
	public void wakeUp() {
		System.out.println("The Zookeeper wakes up the animals of the zoo.");
		for (int i = 0; i < this.animals.size(); i++) {
			this.animals.get(i).wakeUp();
		}
	}
	
	public void rollCall() {
		System.out.println("The Zookeeper does a roll call of all the animals.");
		for (int i = 0; i < this.animals.size(); i++) {
			this.animals.get(i).makeNoise();
		}
	}
	public void feed() {
		System.out.println("The Zookeeper feeds the animals of the zoo.");
		for (int i = 0; i < this.animals.size(); i++) {
			this.animals.get(i).eat();
		}
	}
	public void exercise() {
		System.out.println("The Zookeeper exercises the animals of the zoo.");
		for (int i = 0; i < this.animals.size(); i++) {
			this.animals.get(i).roam();
		}
		
	}
	public void close() {
		System.out.println("The Zookeeper starts to close the zoo. The animals are going to sleep.");
		for (int i = 0; i < this.animals.size(); i++) {
			this.animals.get(i).sleep();
		}
	}
}
