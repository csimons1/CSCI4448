package Q4;

// Inherits from feline, which inherits from animal.
public class cat extends feline {
	
	// Cat's name
	private String name;
	
	// Default Constructor, don't use it.
	public cat() {
		super("None");
		this.name = "None";
	}
	
	// Overridden constructor for setting the cat's name, along with all super-class' name.
	public cat(String name) {
		super(name);
		this.name = name;
	}
	
	// Since cats cannot roar, override the makeNoise from feline class with "meow" instead of "roar"
	public void makeNoise() {
		System.out.println(this.name + " meows.");
	}
}
