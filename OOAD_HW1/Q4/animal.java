package Q4;

/* Animal Super-class
 * Eating, sleeping, waking, and roaming do not seem to be very different across animals
 * in a zoo, so those four actions are handled here. The animal families will handle 
 * makeNoise(), since animals do make different sounds.
 */

public abstract class animal {
	
	// Since methods are going to be called at different steps of the inheritance, we
	// need to have a name all the way up here.
	protected String name;
	
	public animal() {
		this.name = "None";
	}
	
	public animal(String name) {
		this.name = name;
	}
	
	// Only requirement is a text output, so all that is needed is the animal's name
	// and what kind of animal it is to confirm that the animal is doing something.
	public void roam() {
		//animalName = aName;
		System.out.println(this.name + " is exercising.");
	}
	
	public void eat() {
		//animalName = aName;
		System.out.println(this.name + " is eating.");
	}
	
	public void sleep() {
		//animalName = aName;
		System.out.println(this.name + " goes to sleep, Zzz.");
	}
	
	public void wakeUp() {
		//animalName = aName;
		System.out.println(this.name + " has woken up.");
	}
	
	// makeNoise is overwritten everywhere else, but the compiler demands that
	// I have a method here.
	public void makeNoise() {
		System.out.println(this.name + " makes a generic noise.");
	}
}
