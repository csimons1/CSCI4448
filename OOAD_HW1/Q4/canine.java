package Q4;
import java.util.Random;

/* Canine Super-class
 * Canine class only handles makeNoise(), since canines obviously sound different than
 * felines or rhinos.
 */

public abstract class canine extends animal{
	
	/* Since canines bark (or howl), it's noise making is handled here, as opposed to in the
	 * animals super-class. It's lazy to just copy paste it into all dogs/wolfs/etc.
	 * Random Number Generator pro-tip from https://www.geeksforgeeks.org/generating-random-numbers-in-java/
	 * Only requirement is a text output, so all that is needed is the animal's name
	 * to confirm that animal is doing something.
	 */
	
	// The canine's name
	protected String name;
	
	// Default Constructor (Don't use it.)
	public canine() {
		super("None"); // If no name is given, make sure the super-class' name is the same.
		this.name = "None"; // Default
	}
	
	// Overridden Constructor, takes the canine's name in, sets the super-class name and this
	// object's name.
	public canine(String name) {
		super(name);	// Call super-class constructor
		this.name = name;	// Set name here also. This will be used by makeNoise()
	}
	
	public void makeNoise() {
		
		Random rng = new Random();	//Instantiate a Random object.
		
		int noise = rng.nextInt(10);	//Randomly generate a number between 0 and 9
		if (noise % 2 == 0) {			//If random number is even, bork.
			System.out.println(this.name + " borks.");
		}
		else {							//If odd, howl.
			System.out.println(this.name + " howls.");
		}
	}

}
