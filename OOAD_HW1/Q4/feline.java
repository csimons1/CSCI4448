package Q4;

/* Feline Super-class
 * Some felines roar, some don't. Roar is the default noise and is implemented here.
 * Since tigers and lions roar, makeNoise is implemented here. Cats, however, don't 
 * roar, so the Cat class will override the makeNoise in it's class implementation.
 */

public abstract class feline extends animal {
	
	// Name of the feline.
	protected String name;
	
	// Default Constructor (Don't use it.)
	public feline() {
		super("None"); // If no name is given, make sure the super-class' name is the same.
		this.name = "None"; // Default
	}
	
	// Overridden Constructor, takes the feline's name in, sets the super-class name and this
	// object's name.
	public feline(String name) {
		super(name);	// Call super-class constructor
		this.name = name;	// Set name here also. This will be used by makeNoise()
	}
	
	// Only requirement is a text output, so all that is needed is the animal's name
	// to confirm that animal is doing something.
	public void makeNoise() {
		System.out.println(this.name + " ROARS.");
	}

}
